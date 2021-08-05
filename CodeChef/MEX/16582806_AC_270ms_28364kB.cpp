#include<bits/stdc++.h>
#define MX 10000007
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,k;
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        cin>>n>>k;
        ll x;
        map<ll,ll>mp;
        //memset(arr,100003,100003);
        for(ll j=0; j<n; j++)
        {
            cin>>x;
            mp[x]=-1;
        }
        int c=0;
        for(ll j=0;  ;j++){
            if(mp[j]!=-1){
                if(c==k){
                    cout<<j<<endl;
                    break;
                }
                c++;
                mp[j]=-1;
            }
        }

        //cout<<endl;
        //cout<<mp1[c-1]<<endl;
    }
}