#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll x,y;
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        ll arr[x+1];
        for(ll j=0; j<x; j++)
        {
            cin>>arr[j];
        }
        cin>>y;
        ll num;
        for(ll j=0; j<x; j++){
            if(j==y-1)
            {
                num=arr[j];
                break;
            }
        }
        sort(arr,arr+x);
        for(ll j=0; j<x; j++){
            if(arr[j]==num)
            {
                cout<<j+1<<endl;
                break;
            }
        }

    }
}
