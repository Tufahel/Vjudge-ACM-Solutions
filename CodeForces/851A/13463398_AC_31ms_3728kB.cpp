#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k,t;
    cin>>n>>k>>t;
    ll x,res;
    if(t<n && t<k)
        res=t;
    else if(t>=k && t<=n)
        res=k;
    else if(t>k && t>n)
    {
        res=(n+k)-t;
    }
    cout<<res<<endl;
}
