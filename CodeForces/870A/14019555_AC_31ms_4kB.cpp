#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll n,t;
    cin>>n>>t;
    ll arr1[n+1],arr2[t+1];
    for(ll i=0; i<n; i++)
    {
        cin>>arr1[i];
    }
    sort(arr1,arr1+n);
    for(ll i=0; i<t; i++)
    {
        cin>>arr2[i];
    }
    sort(arr2,arr2+t);
    ll x=0,num[1000];
    for(ll i=0; i<t; i++)
    {
        for(ll j=0; j<n; j++){
            if(arr2[i]==arr1[j])
            {
                cout<<arr2[i]<<endl;
                return 0;
            }
        }
    }

    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<t; j++)
        {
            num[x++]=arr1[i]*10 + arr2[j];
            num[x++]=arr1[i]+ arr2[j]*10;
        }
    }
    sort(num,num+x);
    cout<<num[0]<<endl;
}
