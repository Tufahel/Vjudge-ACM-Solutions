#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100003
#define sc scanf
#define pf printf
#define ll int
#define Mx 1000000007
//bool isPrime[sz];
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=1; i<=t; i++){
        ll n,p,q;
        cin>>n>>p>>q;
        ll arr[n+1],sum=0,cnt=0;
        for(ll j=0; j<n; j++){
            cin>>arr[j];
        }
        for(ll j=0; j<n; j++){
            sum=sum+arr[j];
            if(sum<=q){
                if(cnt<p){
                    cnt++;
                }
            }
        }
        cout<<"Case "<<i<<": "<<cnt<<endl;
    }

}
