#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<char,ll>mp;

int main()
{
    ll n,m,a,b;
    cin>>n;
    ll arr[n+2];
    for(ll i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    cin>>m;
    for(ll i=0; i<m; i++){
        cin>>a>>b;
        if(a!=1 && a!=n){
            arr[a+1]=arr[a+1]+arr[a]-b;
            arr[a-1]=arr[a-1]+(arr[a]-(arr[a]-b)-1);
            arr[a]=0;
            //cout<<"a-->"<<a<<" "<<arr[a]<<endl;
            //cout<<"a+1-->"<<a+1<<" "<<arr[a+1]<<endl;
            //cout<<"a-1-->"<<a-1<<" "<<arr[a-1]<<endl;
        }
        if(a==1){
            arr[a+1]=arr[a+1]+arr[a]-b;
            arr[a]=0;
        }
        if(a==n){
            arr[a-1]=arr[a-1]+(arr[a]-(arr[a]-b)-1);
            arr[a]=0;
        }
    }
    for(ll i=1; i<=n; i++){
        cout<<arr[i]<<endl;
    }


}
