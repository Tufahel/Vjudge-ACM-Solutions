#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    double a,b,s,x,r,theta;
    char c;
    for(ll i=1; i<=n; i++){
        cin>>a>>c>>b;
        r=sqrt((a*a + b*b))/2.0;
        theta=acos((2.0*r*r-b*b)/(2.0*r*r));
        s=r*theta;
        x=400.0/(2.0*s + 2.0*a);
        cout<<"Case "<<i<<": ";
        cout<<fixed<<setprecision(6)<<a*x<<" "<<b*x<<endl;

    }
}
