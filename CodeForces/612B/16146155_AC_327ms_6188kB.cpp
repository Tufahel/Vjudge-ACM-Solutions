#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100000003
#define sc scanf
#define pf printf
#define ll long long int
#define Mx 1000000007
#define PI 2*acos(0)
//bool isPrime[sz];
//bool cmp(pair<ll,ll>a, pair<ll,ll>b)

int main()
{
    ll n;
    cin>>n;
    ll x;
    vector<pair<ll,ll> >v;
    for(ll i=1; i<=n; i++){
        cin>>x;
        v.push_back(make_pair(x,i));
    }
    sort(v.begin(),v.end());
    ll sum=0;
    for(ll i=1; i<n; i++){
        sum+=abs(v[i].second-v[i-1].second);
        //cout<<v[i-1].first<<" "<<v[i-1].second<<endl;
    }
    cout<<sum<<endl;

}

