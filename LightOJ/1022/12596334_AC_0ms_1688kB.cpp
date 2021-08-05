#include<bits/stdc++.h>
#include<string.h>
#define pi 2*acos(0.0)

using namespace std;
map<string,int>mp;

int main()
{
    int t;
    cin>>t;
    double x;
    for(int i=1; i<=t; i++)
    {
        scanf("%lf",&x);
        double res= powl((2*x),2);
        double res1= pi*(x*x);
        //double k = 0.000001;
        double ans=(res-res1);
        printf("Case %d: %.2lf\n",i,ans);
    }
}
