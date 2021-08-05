/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 10002
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
#define mod 1000003
bool isPrime[sz];
//const ll mod=1000003;
ll arr[sz1],num[sz1];
void sieve()
{
    //ll sz=18409202;
    for(ll i=0; i<sz; i++)
        isPrime[i]=true;
    isPrime[0]=false;
    isPrime[1]=false;
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
    while(cin>>n){
        if(n==0)
            break;
        ll c=0;
        if(n%2==0)
            c++;
        for(ll i=3; i<=n; i+=2){
            if(isPrime[i]){
                if(n%i==0)
                    c++;
            }
        }
        cout<<n<<" : "<<c<<endl;
    }
}
