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
    ll arr[n+5];

    for(ll i=1; i<=n; i++){
        cin>>arr[i];
        //mp[arr[i]]=1;
    }
    ll j;
    for(ll i=1; i<=n; i++){
        //mp[arr[i]]++;
        map<ll,ll>mp;
        if(arr[i]==i){
            cout<<arr[i]<<" ";
            continue;
        }
        j=i;
        while(1){

            if(mp[j]){
                cout<<j<<" ";
                //mp.clear();
                break;
            }
            mp[j]++;
            j=arr[j];
        }
        //mp.clear();

    }
    cout<<endl;
}

