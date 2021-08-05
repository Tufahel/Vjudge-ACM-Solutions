#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,x;
    cin>>n;
    ll arr[n+1];
    ll num[n+1];
    for(ll i=0; i<n; i++){
        cin>>x;
        arr[i]=x;
        num[i]=x;
    }
    sort(arr,arr+n);
    ll c=0;
    for(ll i=0; i<n; i++){
        if(arr[i]!=arr[i+1])
            c++;
    }
    cout<<c<<endl;
    for(ll i=n-1; i>=0; i--){
        for(ll j=i-1; j>=0; j--){
            if(num[i]==num[j])
            {
                num[j]=-1;
            }
        }
    }
    ll cnt=0;
    for(ll i=0; i<n; i++){
        if(num[i]!=-1)
        {
            if(cnt==0)
                cout<<num[i];
            else
                cout<<" "<<num[i];
            cnt++;
        }
    }
    cout<<endl;

}
