#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n;
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        cin>>n;
        ll arr[n+2];
        for(ll j=0; j<n; j++)
            cin>>arr[j];
        sort(arr,arr+n);
        ll p,c=0;
        for(ll j=0; j<n-2; j++)
        {
            p=j+2;
            for(ll k=j+1; k<n; k++)
            {
                while(p<n and arr[j]+arr[k]>arr[p])
                    p=p+1;
                c=c+p-k-1;
            }
        }
        cout<<"Case "<<i<<": "<<c<<endl;
    }
}
