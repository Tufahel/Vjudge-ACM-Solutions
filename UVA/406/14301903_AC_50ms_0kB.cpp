#include<bits/stdc++.h>
using namespace std;
#define sz 1000002
#define sc scanf
#define pf printf
#define ll long long
bool isPrime[sz];
int bs[sz];

void sieve()
{
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
    ll n,c;
    //cin>>n>>c;
    while(sc("%lld%lld",&n,&c)!=EOF)
    {
        ll arr[n+1];
        ll prime[n+1];
        ll d=0;
        ll x=0;
        ll e=0;
        for(ll i=1; i<=n; i++)
        {
            if(isPrime[i])
            {
                arr[x++]=i;
            }
        }
        if(x%2==1 && x>c)
        {
            for(ll i=x/2;  ; i--)
            {
                if(e==c || i==-1)
                    break;
                prime[d++]=arr[i];
                e++;
            }
            e=0;
            for(ll i=(x/2)+1; ; i++)
            {
                if(e==c-1 || i==x)
                    break;
                prime[d++]=arr[i];
                e++;
            }
        }
        else if(x%2==0 && x>c)
        {
            for(ll i=x/2;  ; i--)
            {
                if(e==c+1 || i==-1)
                    break;
                prime[d++]=arr[i];
                e++;
            }
            e=0;
            for(ll i=(x/2)+1; ; i++)
            {
                if(e==c-1 || i==x)
                    break;
                prime[d++]=arr[i];
                e++;
            }
        }
        else
        {
            for(ll i=0; i<x ; i++)
            {
                prime[d++]=arr[i];
            }
        }
        sort(prime,prime+d);
        pf("%lld %lld:",n,c);
        for(ll i=0; i<d; i++)
        {

            //cout<<prime[i]<<endl;
            pf(" %lld",prime[i]);
        }
        pf("\n\n");
    }

}
