#include<bits/stdc++.h>
#include<string.h>
#define ll long long
#define sc scanf
#define pf printf
#define sz 1000009
#define MOD 1000000007

using namespace std;

map<ll,ll>mp;
int main()
{

    ll t,n,k;
    sc("%lld",&t);
    mp[0]=0;
    mp[1]=0;
    mp[2]=1;
    mp[3]=1;
    for(ll i=4; i<sz; i++)
    {
        mp[i]=(mp[i-2]+mp[i-3])%MOD;
    }
    for(ll i=0; i<t; i++)
    {
        sc("%lld",&n);
        pf("%lld\n",mp[n]);
    }
}
