#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll arr[n+1];
    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll c=0,d=0;
    ll dif=arr[n-1]-arr[0];
    ll x=arr[0],y=arr[n-1];
    for(ll i=0; i<n; i++){
        if(arr[i]==x)
            c++;
        else if(arr[i]==y)
            d++;
    }
    if(c==n){
        cout<<dif<<" "<<(c*(c-1))/2<<endl;
        return 0;
    }
    cout<<dif<<" "<<c*d<<endl;
}
