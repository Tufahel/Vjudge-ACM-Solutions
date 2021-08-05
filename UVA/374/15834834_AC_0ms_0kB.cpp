#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100003
#define sc scanf
#define pf printf
#define ll long long int
#define Mx 1000000007
#define PI 2*acos(0)
//bool isPrime[sz];
//bool cmp(pair<ll,ll>a, pair<ll,ll>b)
ll power(ll a,ll n,ll mod)
{
    ll ans=1;
    while(n>0){
        if(n%2==1){
            n=n-1;
            ans=(ans*a)%mod;     //Mx-->>1000000007
        }
        a=(a*a)%mod;
        n=n/2;
     }
    return ans;
}
int main()
{
    ll b,p,m;
    while(sc("%lld %lld %lld",&b,&p,&m)!=EOF){
        //pf("\n");
        ll res=power(b,p,m);
        pf("%lld\n",res);

    }
    //cin>>b>>p>>m;
    //cout<<power(b,p,m);
}
