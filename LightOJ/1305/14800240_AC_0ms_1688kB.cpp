/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz2 18409202
#define sz1 100003
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
//bool isPrime[sz];
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;
int main()
{
    int n;
    sc("%d",&n);
    for(int i=1; i<=n; i++){
        int a1,a2,b1,b2,c1,c2;
        sc("%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&c1,&c2);
        int x=a1+c1;
        int y=a2+c2;
        int d1=x-b1;
        int d2=y-b2;
        int ans=c1*d2+d1*a2+a1*b2+b1*c2-d1*c2-a1*d2-b1*a2-c1*b2;
        pf("Case %d: %d %d %d\n",i,d1,d2,abs(ans/2));
    }
}
