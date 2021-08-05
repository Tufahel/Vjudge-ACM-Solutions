#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    ll x,y;
    vector< pair<ll,ll> >vt;
    for(ll i=0; i<n; i++){
        cin>>x>>y;
        vt.push_back(make_pair(x,y));
    }
    sort(vt.begin(),vt.end());
    ll sum[n+6];
    sum[0]=0;
    for(ll i=0; i<n; i++){
        sum[i+1]=sum[i]+vt[i].second;
    }
    ll j=0,mx=-1;
    for(ll i=0; i<n; i++){
        for( ; j<n && abs(vt[i].first-vt[j].first)<k; j++){

        }
        mx=max(sum[j]-sum[i],mx);
    }
    cout<<mx<<endl;

}
