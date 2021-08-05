/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100001
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
//bool isPrime[sz];
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;
int main()
{
    int n;
    sc("%d",&n);
    for(int i=1; i<=n; i++)
    {
        double x,y,z;
        //cin>>x>>y>>z;
        sc("%lf %lf %lf",&x,&y,&z);
        double a=(x+y);
        double b=(y+z);
        double c=(x+z);
        double s=(a+b+c)/2.0;
        double S=sqrt(s*(s-a)*(s-b)*(s-c));
        double x1=acos((b*b+c*c-a*a)/(2*b*c));
        double y1=acos((a*a+c*c-b*b)/(2*c*a));
        double z1=acos((a*a+b*b-c*c)/(2*b*a));
        double S1=0.5*((y1*x*x)+(z1*y*y)+(x1*z*z));
        double diff=S-S1;
        //cout<<fixed<<setprecision(6)<<diff<<endl;
        pf("Case %d: %.8lf\n",i,diff);
    }
}