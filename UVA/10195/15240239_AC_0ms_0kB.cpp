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
    double a,b,c,s,area,r;
    while((sc("%lf %lf %lf",&a,&b,&c))!=EOF)
    {
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        r=area/s;
        if(a==0 && b==0 && c==0)
            r=0;
        cout<<fixed<<setprecision(3)<<"The radius of the round table is: "<<r<<endl;
    }

}
