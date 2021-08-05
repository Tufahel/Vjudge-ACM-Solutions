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
int triangle(int a1,int b1,int a2,int b2,int a3,int b3)
{
    int area=abs(a1*(b2-b3)+a2*(b3-b1)+a3*(b1-b2));
    return area;
}
int slope(int a1,int b1,int a2,int b2)
{
    int slope=(b2-b1)/((a2-a1)*1.0);
    return slope;
}
int main()
{
    int n,x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>n;
    cout<<"INTERSECTING LINES OUTPUT"<<endl;
    for(ll i=0; i<n; i++)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        if(triangle(x1,y1,x2,y2,x3,y3)==0 && triangle(x1,y1,x2,y2,x4,y4)==0)
        {
            cout<<"LINE"<<endl;
            continue;
        }
        if(slope(x1,y1,x2,y2)-slope(x3,y3,x4,y4)==0)
        {
            cout<<"NONE"<<endl;
            continue;
        }
        int a,b,c,d,e,f;
        a=((x3-x1)*(y1-y2)*(y3-y4));
        b=y3*(x1*y1-x2*y1);
        c=y4*(x1*y1-x2*y1);
        d=y1*(x3*y3-x4*y3);
        e=y2*(x3*y3-x4*y3);
        f=(x1*y3-x2*y3-x1*y4+x2*y4-x3*y1+x4*y1+x3*y2-x4*y2);
        double y=(a+b-c-d+e)/(f*1.0);
        double x=(((y-y1)*(x1-x2)*1.0)/(y1-y2))+x1*1.0;
        cout<<fixed<<setprecision(2)<<"POINT "<<x<<" "<<y<<endl;
    }
    cout<<"END OF OUTPUT"<<endl;

}
