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
//bool cmp(pair<ll,ll>a, pair<ll,ll>b)
int main()
{
    ll n,d,k;
    cin>>n>>d>>k;
    string st;
    ll x;
    vector< pair<ll,string> > vt;
    for(ll i=0; i<n; i++){
        cin>>st>>x;
        vt.push_back(make_pair(x,st));
    }
    sort(vt.begin(), vt.end());
    ll c=0,sum=0;
    map<ll,string>mp;
    for(ll i=n-1; i>=0; i--){
        sum=sum+vt[i].first;
        if(sum<d){
            mp[c++]=vt[i].second;
        }
        else if(sum>=d){
            mp[c++]=vt[i].second;
            break;
        }
    }
    if(c>k || sum<d){
        cout<<"impossible"<<endl;
        return 0;
    }
    cout<<c<<endl;
    for(ll i=0; i<c; i++){
        cout<<mp[i]<<", YOU ARE FIRED!"<<endl;
    }
}
