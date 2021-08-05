/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 11111111
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
//bool isPrime[sz];
//ll arr[100002];
//ll num[4000];

int main()
{
    ll n;
    cin>>n;
    ll arr[n+1],sum=0,e=0;
    for(ll i=0; i<n; i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    for(ll i=0; i<n; i++){
        sum=sum-arr[i];
        if(sum%2==0)
            e++;
        sum=sum+arr[i];
    }
    cout<<e<<endl;
}