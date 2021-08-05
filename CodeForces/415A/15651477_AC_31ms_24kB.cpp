#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100003
#define sc scanf
#define pf printf
#define ll long long int
#define Mx 1000000007
#define PI 2*acos(0)
//bool isPrime[sz];
//bool cmp(pair<ll,ll>a, pair<ll,ll>b)
int main()
{
    ll n,m;
    cin>>n>>m;
    ll arr[n+5],num[n+5];
    for(ll i=0; i<n+5; i++)
        arr[i]=0;
    ll mx=0;
    for(ll i=1; i<=m; i++){
        cin>>num[i];
    }
    ll c;
    for(ll i=1; i<=m; i++){
        for(ll j=num[i]; j<=n; j++){
            if(arr[j]==0){
                arr[j]=num[i];
            }
        }
    }
    for(ll i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
