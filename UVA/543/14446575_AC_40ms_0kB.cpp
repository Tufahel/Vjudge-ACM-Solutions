/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 1000000
#define sz1 100002
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
#define mod 1000003
bool isPrime[sz];
//const ll mod=1000003;
//ll arr[sz1],num[sz1],num1[sz1];
void sieve()
{
    //ll sz=18409202;
    for(ll i=0; i<sz; i++)
        isPrime[i]=true;
    isPrime[0]=false;
    isPrime[1]=true;
    for(ll i=2; i<sz; i++)
    {
        if(isPrime[i])
        {
            for(ll j=i+i; j<sz; j+=i)
                isPrime[j]=false;
        }
    }
}
int main()
{
    sieve();
    ll n;
    while(cin>>n)
    {
        if(n==0)
            break;
        if(n==1){
            cout<<n<<" = "<<0<<" + "<<1<<endl;
            continue;
        }
        if(n==3){
            cout<<n<<" = "<<0<<" + "<<3<<endl;
            continue;
        }
        ll x,y,flag,f=0;
        for(ll i=2; i<=n/2; i++)
        {
            flag=0;
            if(isPrime[i])
            {
                ll j=n-i;
                if(isPrime[j])
                {
                    if(i+j==n)
                    {
                        flag=1;
                        f=1;
                        cout<<n<<" = "<<i<<" + "<<j<<endl;
                        break;
                    }
                }
            }
        }
        if(f==0){
            cout<<"Goldbach's conjecture is wrong."<<endl;
        }

    }
}
