#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll arr[n+2],mx=0;
    arr[0]=0;
    for(ll i=1; i<=n; i++){
        cin>>arr[i];
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    cout<<mx<<endl;
}
