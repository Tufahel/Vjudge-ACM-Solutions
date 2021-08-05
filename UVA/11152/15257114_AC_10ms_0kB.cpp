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
    int a,b,c;
    while(sc("%d %d %d",&a,&b,&c)!=EOF){
        double s,triangle,violet,red,r,r1,Circle,yellow;
        s=(a+b+c)/2.0;
        triangle=sqrt(s*1.0*(s-a)*(s-b)*(s-c));
        r=(a*b*c)/(4.0*triangle);
        Circle=acos(-1)*r*r;
        yellow=Circle-triangle;
        r1=triangle/s;
        red=acos(-1)*r1*r1;
        violet=triangle-red;
        cout<<fixed<<setprecision(4)<<yellow<<" "<<violet<<" "<<red<<endl;
    }

}
