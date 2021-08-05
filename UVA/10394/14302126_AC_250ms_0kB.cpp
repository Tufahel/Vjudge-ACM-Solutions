#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100002
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
ll arr[1000004],num[1000004];
int main()
{
    sieve();
    ll n;
    ll c=1,d=1;
    for(ll i=2; i<sz; i++){
        if(isPrime[i] && isPrime[i+2]){
            arr[c++]=i;
            num[d++]=i+2;
        }

    }
    while(sc("%lld",&n)!=EOF){
        pf("(%lld, %lld)\n",arr[n],num[n]);
    }

}
