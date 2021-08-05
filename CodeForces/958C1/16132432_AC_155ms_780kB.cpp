#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,m;
    cin>>n>>m;
    ll mn=LONG_LONG_MIN;
    ll arr[n+4];
    ll sum=0,res=0,mins;
    for(ll i=0; i<n; i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    for(ll i=0; i<n; i++){
        res=res+arr[i];
        sum=sum-arr[i];
        if(((res%m)+(sum%m))>mn)
            mn=((res%m)+(sum%m));
    }
    cout<<mn<<endl;

}
