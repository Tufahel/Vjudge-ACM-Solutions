#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        double r1,r2,p,h,rp,v;
        cin>>r1>>r2>>h>>p;
        rp=r2+(((r1-r2)*p)/h);
        v=(acos(-1)*p*((r2*r2)+(r2*rp)+(rp*rp)))/3.0;
        //v=acos(-1)*r2*rp*p;
        cout<<fixed<<setprecision(7)<<"Case "<<i<<": "<<v<<endl;
    }
}

