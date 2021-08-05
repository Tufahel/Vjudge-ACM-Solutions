#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    if(a.first>b.first)
        return true;
    else if(a.first<b.first)
        return false;
    else
        return a.second<b.second;
}
int main()
{
    vector< pair<ll,ll> > v;
    ll a,b;
    cin>>a>>b;
    for(ll i=0; i<a; i++)
    {
        ll x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end(), cmp);
    ll c=0;
    for(ll i=0; i<a; i++)
    {
        if(v[i]==v[b-1])
            c++;
    }
    cout<<c<<endl;
}
