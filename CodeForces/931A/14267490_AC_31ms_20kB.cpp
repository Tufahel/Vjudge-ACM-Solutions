#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll x,y;
    cin>>x>>y;
    ll mn=min(x,y);
    ll mx=max(x,y);
    ll ans=(mn+mx)/2;
    ll dif1=(mx-ans);
    ll dif2=(ans-mn);
    ll sum=0;
    ll c=0;
    for(ll i=mn; i<=ans; i++){
        sum=sum+c;
        c++;
    }
    c=0;
    for(ll i=ans; i<=mx; i++){
        sum=sum+c;
        c++;
    }
    cout<<sum<<endl;
}
