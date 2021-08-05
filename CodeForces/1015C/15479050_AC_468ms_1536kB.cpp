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

int main()
{
    ll n,storage;
    cin>>n>>storage;
    ll x,y,sum=0,c=0,i;
    vector<ll>v;
    for(ll i=0; i<n; i++){
        cin>>x>>y;
        v.push_back(x-y);
        sum=sum+x;
    }
    sort(v.begin(),v.end());
    for(i=n-1; i>=0; i--){
        if(sum>storage){
            sum=sum-v[i];
            c++;
        }
        if(sum<=storage)
            break;
    }
    if(i==-1 && sum>storage)
        c=-1;
    cout<<c<<endl;
}
