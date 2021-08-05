/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 11111111
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
//bool isPrime[sz];
//ll arr[100002];
//ll num[4000];
//string st;
//double con=10000;
int main()
{
    double a,b,ans;
    while(sc("%lf %lf",&a,&b)==2){
        ans=powl(b,1/a);
        pf("%.0lf\n",ans);
    }

}
