#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll t,n;
    cin>>t>>n;
    ll ri[t+1],wr[n+1];
    ll mx,res;
    for(ll i=0; i<t; i++)
    {
        cin>>ri[i];
    }
    sort(ri,ri+t);
    mx=max(ri[0]*2, ri[t-1]);
    for(ll i=0; i<n; i++)
    {
        cin>>wr[i];
    }
    sort(wr,wr+n);
    if(mx<wr[0])
        cout<<mx<<endl;
    else
        cout<<"-1"<<endl;
}
