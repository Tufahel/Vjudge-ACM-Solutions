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
//string st;
int main()
{
    ll n;
    cin>>n;
    ll arr[n+1];
    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }
    if(arr[0]%2==1 && arr[n-1]%2==1 && n%2==1)
        cout<<"Yes"<<endl;
    else
        cout<<"NO"<<endl;
}

