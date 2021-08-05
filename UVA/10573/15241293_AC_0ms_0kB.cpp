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
    int n,x=1,y=2;
    sc("%d",&n);
    for(ll i=0; i<n; i++)
    {
        double r,r1,r2;
        double area,area1,area2,final_area;
        char ch;
        sc("%lf%c",&r1,&ch);
        if(ch==' ')
        {
            //getchar();
            sc("%lf",&r2);
            r=((r1*2)+(r2*2))/2.0;
            //cout<<r<<endl;
            area=acos(-1.0)*r*r*1.0;

            area1=acos(-1.0)*r1*r1*1.0;
            area2=acos(-1.0)*r2*r2*1.0;
            //cout<<fixed<<setprecision(4)<<area<<" "<<area1<<" "<<area2<<endl;
            final_area=area-(area1+area2);
            cout<<fixed<<setprecision(4)<<final_area<<endl;
        }
        else if(ch=='\n')
        {
            r=r1/2.0;
            area=acos(-1.0)*r*r*1.0;
            r1=r1/4.0;
            area1=2*acos(-1.0)*r1*r1*1.0;
            area2=area-area1;
            //cout<<fixed<<setprecision(4)<<area<<" "<<area1<<endl;
            cout<<fixed<<setprecision(4)<<area2<<endl;
        }
    }


}
