//'[ْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*//

#include<bits/stdc++.h>
using namespace std;
#define sz2 18409202
#define sz1 700003
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
//bool isPrime[sz];
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;
//long long lazy[sz1];
//long long tree[sz1*4];
//ll arr[sz1*3];
int main()
{
    double r,n;
    while(sc("%lf%lf",&r,&n)!=EOF){
        double ans=0.5*n*r*r*sin((2*acos(-1))/n);
        cout<<fixed<<setprecision(3)<<ans<<endl;
    }

}
