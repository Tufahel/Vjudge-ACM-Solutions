#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll x,minn,div,pos;
    for(ll i=0; i<k; i++)
    {
        cin>>x;
        ll mod=n%x;
        if(i==0 || mod<minn)
        {
            minn=n%x;
            div=n/x;
            pos=i;
            //cout<<minn<<endl;
        }
    }
    cout<<pos+1<<" "<<div<<endl;
}