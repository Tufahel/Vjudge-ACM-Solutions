#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n,m;
    cin>>n>>m;
    ll dor[n+1];
    ll room[m+1];
    ll sum;
    dor[0]=0;
    for(ll i=1; i<=n; i++){
        cin>>sum;
        dor[i]=dor[i-1]+sum;
    }
    ll k=1;
    for(ll i=1; i<=m; i++){
        cin>>sum;
        while(dor[k]<sum){
            k++;
        }
        cout<<k<<" "<<sum-dor[k-1]<<endl;
    }
}
