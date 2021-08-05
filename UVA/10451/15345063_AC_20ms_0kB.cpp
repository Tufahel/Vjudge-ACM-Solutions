
#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100003
#define sc scanf
#define pf printf
#define ll long long int
#define Mx 1000000007
#define PI 2*acos(0)
//bool isPrime[sz];
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;
int main()
{
    int n,c=0;
    double pArea;
    while(sc("%d %lf",&n,&pArea)!=EOF){
        if(n<3)
            break;
        double r,cArea,dot,pSide,r1,cArea1,criss;
        r=sqrt((2*pArea)/(n*sin((2*PI)/n)));
        cArea=PI*r*r;
        dot=cArea-pArea;
        pSide=2*r*sin(PI/n);
        r1=pSide/(2*tan(PI/n));
        cArea1=PI*r1*r1;
        criss=pArea-cArea1;
        c++;
        cout<<fixed<<setprecision(5)<<"Case "<<c<<": "<<dot<<" "<<criss<<endl;
    }
}
