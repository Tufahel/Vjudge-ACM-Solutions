#include<bits/stdc++.h>
#define sc scanf
#define pf printf
#define ll long long
using namespace std;

int main()
{
    ll n;
    sc("%lld",&n);
    double oX,oY,aX,aY,bX,bY;
    for(ll i=1; i<=n; i++)
    {
        sc("%lf%lf%lf%lf%lf%lf",&oX,&oY,&aX,&aY,&bX,&bY);
        double r=sqrt((oX-aX)*(oX-aX)+(oY-aY)*(oY-aY));
        double d=sqrt((bX-aX)*(bX-aX)+(bY-aY)*(bY-aY));
        double deg=acos(1.0-((d*d)/(2.0*r*r)));
        double ans=r*deg;
        pf("Case %lld: %.9lf\n",i,ans);
    }

}
