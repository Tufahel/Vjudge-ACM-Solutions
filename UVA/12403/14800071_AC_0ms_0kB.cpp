/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz2 18409202
#define sz1 100003
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
//bool isPrime[sz];
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;
int main()
{
    ll n,sum=0;
    cin>>n;
    for(ll i=1; i<=n; i++){
        string st;
        ll num;
        cin>>st;
        if(st=="donate"){
            cin>>num;
            sum=sum+num;
        }
        else{
            cout<<sum<<endl;
        }
    }
}
