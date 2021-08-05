/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 11111111
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
//bool isPrime[sz];
//ll arr[100002];
//ll num[4000];
//string st;
int main()
{
    ll n,i;
    cin>>n;
    ll x;
    ll arr[n+2];
    if(n==1 || n==2)
    {
        cout<<1<<endl;
        cout<<1<<endl;
        return 0;
    }
    if(n==3)
    {
        cout<<2<<endl;
        cout<<"1 3"<<endl;
        return 0;
    }

    x=1;
    ll p=n/2;
    if(n%2==1)
        p+=1;
    for(ll i=1; i<=p; i++)
    {
        arr[i]=x;
        x=x+2;
    }
    x=n;
    if(n%2==1)
        x--;
    for(ll i=p+1; i<=n; i++)
    {
        arr[i]=x;
        x=x-2;
    }
    cout<<n<<endl;
    ll c=0;
    for(ll i=1; i<=n; i++)
        {
            if(abs(arr[i]-arr[i+1])==1 && c==0)
            {
                if(n%2==1)
                    swap(arr[i],arr[i-2]);
                else
                    swap(arr[i],arr[i-1]);
                c=1;
            }
        }
    for(ll i=1; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }

}