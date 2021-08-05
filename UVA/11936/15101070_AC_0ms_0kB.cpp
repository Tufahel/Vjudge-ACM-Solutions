//'[ْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*//

#include<bits/stdc++.h>
using namespace std;
#define sz2 18409202
#define sz1 700003
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
//bool isPrime[sz];
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;
//long long lazy[sz1];
//long long tree[sz1*4];
//ll arr[sz1*3];
int main()
{
    ll n;
    cin>>n;
    for(ll i=0; i<n; i++){
        ll arr[4];
        for(ll j=0; j<3; j++){
            cin>>arr[j];
        }
        sort(arr,arr+3);
        if(arr[0]+arr[1]>arr[2])
            cout<<"OK"<<endl;
        else
            cout<<"Wrong!!"<<endl;
    }
}
