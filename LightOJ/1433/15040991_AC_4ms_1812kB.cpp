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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=1; i<=t; i++){
        double ox,oy,ax,ay,bx,by;
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        double oa=sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
        double ab=sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay));
        double deg=acos(((oa*oa)+(oa*oa)-(ab*ab))/(2.0*oa*oa));
        double s=oa*deg;
        cout<<"Case "<<i<<": "<<fixed<<setprecision(8)<<s<<endl;
    }
}
