#include<bits/stdc++.h>
#define sc scanf
#define pf printf
#define ll long long
using namespace std;

int main()
{
    ll n;
    sc("%lld",&n);
    for(ll i=1; i<=n; i++){
        double r;
        sc("%lf",&r);
        double a=r*2;
        double sqArea=powl(a,2);
        double crArea=2*acos(0.0)*powl(r,2);
        double shaded=sqArea-crArea;
        pf("Case %lld: %.2lf\n",i,shaded);
    }

}
