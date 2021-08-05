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
    ll arr[60];
    arr[1]=1;
    arr[2]=2;
    for(ll i=3; i<=52; i++)
        arr[i]=arr[i-1]+arr[i-2];
    while(cin>>n){
        if(n==0)
            return 0;
        cout<<arr[n]<<endl;
    }
}
