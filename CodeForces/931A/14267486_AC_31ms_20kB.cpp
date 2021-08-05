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
    for(ll i=1; i<=dif1; i++){
        sum=sum+i;
    }
    for(ll i=1; i<=dif2; i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
}
