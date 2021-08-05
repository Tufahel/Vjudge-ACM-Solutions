#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,x,y;
    cin>>n;
    ll arr[n+1],num[n+1];
    string st;
    cin>>st;
    for(ll i=0; i<n; i++)
    {
        arr[i]=st[i]-48;
    }
    for(ll i=0; i<n; i++)
    {
        num[i]=st[i+n]-48;
    }
    sort(arr,arr+n);
    sort(num,num+n);
    if(arr[0]<=num[0])
    {
        for(ll i=0; i<n; i++)
        {
            if(arr[i]>=num[i])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    if(arr[0]>=num[0])
    {
        for(ll i=0; i<n; i++)
        {
            if(arr[i]<=num[i])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    if(n==1)
    {
        if(arr[0]==num[0]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}
