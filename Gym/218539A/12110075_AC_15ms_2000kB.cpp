#include<bits/stdc++.h>
#define ll long long
#define sc scanf
#define pf printf
using namespace std;

int main()
{
    ll t,i,n,p,res,res1;
    ll k=1000000007;
    sc("%lld",&t);
    for(i=0; i<t; i++)
    {
        sc("%lld",&n);
        res1=n%k;
        if(res1<=0)
            res1=1;
        pf("%lld\n",res1);
    }
}
