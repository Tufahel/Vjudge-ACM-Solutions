#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<string,ll>mp;
int main()
{
    ll n,x,y;
    cin>>n>>x;
    ll arr[n+1];
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
        //num[i]=x;
    }
    cin>>y;
    ll sum=0;
    //sort(arr,arr+n);
    for(ll i=0; i<n; i++)
    {
        if(i==x)
            continue;
        sum=sum+arr[i];
    }
    if((sum/2)==y)
        cout<<"Bon Appetit"<<endl;
    else
        cout<<y-(sum/2)<<endl;

    //cout<<sum<<" "<<y<<endl;
}
