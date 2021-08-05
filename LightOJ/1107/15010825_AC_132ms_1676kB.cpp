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
    for(ll i=1; i<=t; i++)
    {
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        cout<<"Case "<<i<<":"<<endl;
        ll n;
        cin>>n;
        for(ll j=1; j<=n; j++)
        {
            ll a,b;
            cin>>a>>b;
            if(a>x1 && b>y1 && a<x2 && b<y2)
            {
                cout<<"Yes"<<endl;
            }
            else
                cout<<"No"<<endl;
        }
    }
}
