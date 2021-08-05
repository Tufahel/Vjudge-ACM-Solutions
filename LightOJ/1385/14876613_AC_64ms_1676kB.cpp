/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

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
    ll n;
    cin>>n;
    for(ll i=1; i<=n; i++){
        double a,b,c,d,x,y;
        cin>>a>>b>>c;
        x=a*c*(a+ 2*b +c);
        y=(b*b)-(a*c);
        d=x/y;
        if(y==0 || d<0){
            cout<<"Case "<<i<<": "<<-1<<endl;
            continue;
        }
        cout<<fixed<<setprecision(8)<<"Case "<<i<<": "<<d<<endl;
    }

}
