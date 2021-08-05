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
    double x1,y1,x2,y2,x3,y3;
    while((sc("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3))!=EOF){
        double a,b,c,s,area,r;
        a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        s=(a+b+c)/2.0;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        r=(a*b*c)/(4*area);
        double poridhi=2*PI*r;
        cout<<fixed<<setprecision(2)<<poridhi<<endl;
    }

}
