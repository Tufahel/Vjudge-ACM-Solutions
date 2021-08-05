#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<ll,ll>mp;
int main()
{
    ll n;
    cin>>n;
    ll arr[n+1],num[n+1];
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    ll x=1,y=2,z=3,temp;
    for(ll i=0; i<n; i++)
    {
        if(arr[i]==z)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        if(arr[i]==x)
        {
            temp=z;
            z=y;
            y=temp;
        }
        else
        {
            temp=z;
            z=x;
            x=temp;
        }
    }
    cout<<"YES"<<endl;



}
