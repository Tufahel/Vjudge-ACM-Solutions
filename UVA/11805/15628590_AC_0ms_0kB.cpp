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
    ll n;
    cin>>n;
    for(ll i=1; i<=n ; i++){
        ll n,k,p;
        cin>>n>>k>>p;
        ll temp=k;
        while(p){
            if(temp==n){
                temp=1;
                p--;
                continue;
            }
            temp++;
            p--;
            //cout<<temp<<" ll"<<endl;
        }
        cout<<"Case "<<i<<": "<<temp<<endl;
    }
}
