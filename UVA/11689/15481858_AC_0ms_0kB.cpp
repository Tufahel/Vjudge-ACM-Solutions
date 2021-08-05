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
    ll n,x,y,z;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>x>>y>>z;
        ll total=x+y;
        ll soda=0;
        while(total/z!=0){
            //total=total-p;
            //c++;
            soda+=total/z;
            total=total/z + total%z;
        }
        cout<<soda<<endl;
    }
}

