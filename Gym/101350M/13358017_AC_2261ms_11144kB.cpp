#include<bits/stdc++.h>
#define dl double
#define pf printf
#define sc scanf
using namespace std;

int main()
{
    int n,x,y;
    cin>>n;
    while(n--)
    {
        map<string,dl>mp;
        cin>>x>>y;
        char st[1000000];
        dl d;
        for(int i=0; i<x; i++)
        {
            sc("%s %lf",&st,&d);
            mp[st]=d;
        }
        mp["JD"]=1;
        char st1[1000000];
        dl d2;
        dl prod,sum=0.0;
        for(int i=0; i<y; i++)
        {
            sc("%lf %s",&d2,&st1);
            prod=d2*mp[st1];
            sum=sum+prod;
        }
        pf("%.6lf\n",sum);
        mp.clear();
    }

}

