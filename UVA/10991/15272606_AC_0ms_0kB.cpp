/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100003
#define sc scanf
#define pf printf
#define ll int
#define Mx 1000000007
#define PI 3.141592653589793
//bool isPrime[sz];
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;

int main()
{
    int n;
    cin>>n;
    for(ll i=0; i<n; i++){
        double r1,r2,r3,c1,c2,c3,x,y,z,s,tri,sector,shaded;
        cin>>r1>>r2>>r3;
        c1=r1+r2;
        c2=r2+r3;
        c3=r1+r3;
        s=(c1+c2+c3)/2.0;
        tri=sqrt(s*(s-c1)*(s-c2)*(s-c3));
        x=acos((c1*c1+c3*c3-c2*c2)/(2.0*c1*c3));
        y=acos((c1*c1+c2*c2-c3*c3)/(2.0*c1*c2));
        z=acos((c2*c2+c3*c3-c1*c1)/(2.0*c2*c3));
        sector=((x*r1*r1)+(y*r2*r2)+(z*r3*r3))*0.5;
        shaded=tri-sector;
        cout<<fixed<<setprecision(6)<<shaded<<endl;
    }

}
