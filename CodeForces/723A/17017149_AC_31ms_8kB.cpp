#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll arr[4]={a,b,c};
    sort(arr,arr+3);
    ll res=(arr[2]-arr[1])+(arr[1]-arr[0]);
    cout<<res<<endl;
}