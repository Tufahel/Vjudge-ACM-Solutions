#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n,k,f,t,mx=-1000000007;
    cin>>n>>k;
    for(ll i=0; i<n; i++){
        cin>>f>>t;
        if(t>k){
            mx=max(mx,(f-(t-k)));
        }
        else{
            mx=max(mx,f);
        }
    }
    cout<<mx<<endl;
}
