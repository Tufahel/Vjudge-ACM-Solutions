#include<bits/stdc++.h>
#define ll long long
#define inf 0x3f3f3f3f
using namespace std;
ll arr[100000];
int main()
{
    ll a,b;
    cin>>a>>b;

    ll k;
    for(ll i=0; i<b; i++){
        cin>>k;
        arr[k]++;
    }
    ll mx=inf;
    for(ll i=1; i<=a; i++){
        mx=min(mx,arr[i]);
    }
    cout<<mx<<endl;
}