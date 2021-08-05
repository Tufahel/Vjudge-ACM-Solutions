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
    ll t,n;
    cin>>t;
    for(ll i=1; i<=t; i++){
        cin>>n;
        string st,st1;
        ll x,y,z,area,mx,c=0;
        vector< pair<ll,string> >vt;
        for(ll j=0; j<n; j++){
            cin>>st>>x>>y>>z;
            area=x*y*z;
            vt.push_back(make_pair(area,st));
        }
        sort(vt.begin(),vt.end());
        if(vt[n-1].first>vt[0].first){
            c=1;
            st1=vt[n-1].second;
        }
        if(c==0)
            cout<<"Case "<<i<<": no thief"<<endl;
        else
            cout<<"Case "<<i<<": "<<st1<<" took chocolate from "<<vt[0].second<<endl;

    }

}
