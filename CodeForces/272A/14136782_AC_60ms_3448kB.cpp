#include<bits/stdc++.h>
#define ll long long
#define pf printf
using namespace std;
ll arr[1000];
int main()
{
    ll n,x;
    cin>>n;
    ll sum=0;

    for(ll i=0; i<n; i++){
        cin>>x;
        sum=sum+x;
    }
    for(ll i=1; i<=1000; i=i+n+1){
        arr[i]=1;
    }
    ll k=0;
    for(ll i=sum+1; i<=sum+5; i++){
        if(arr[i]!=1){
            k++;
            //break;
        }
    }
    cout<<k<<endl;

}
