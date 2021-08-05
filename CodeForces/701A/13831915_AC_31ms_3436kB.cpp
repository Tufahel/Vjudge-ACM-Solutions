#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<string,ll>mp;
int main()
{
    ll n,x;
    cin>>n;
    ll arr[n+1],num[n+1];
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        arr[i]=x;
        num[i]=x;
    }
    sort(arr,arr+n);
    ll val=arr[0]+arr[n-1],r1,r2,c;
    for(ll i=0; i<n-1; i++)
    {
        if(num[i]==-1)
            continue;
        for(ll j=i+1; j<n; j++)
        {
            if(num[i]+num[j]==val)
            {
                r1=i+1;
                r2=j+1;
                num[j]=-1;
                break;
            }
        }
        cout<<r1<<" "<<r2<<endl;
    }


}
