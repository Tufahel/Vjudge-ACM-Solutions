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
    ll arr[6],num[6];
    for(ll i=0; i<n; i++){
        for(ll j=0; j<4; j++){
            cin>>arr[j];
            num[j]=arr[j];
        }
        sort(arr,arr+4);
        if(arr[0]==arr[3])
            cout<<"square"<<endl;
        else if(arr[0]==arr[1] && arr[2]==arr[3])
            cout<<"rectangle"<<endl;
        else if(arr[0]+arr[1]+arr[2]<=arr[3])
            cout<<"banana"<<endl;
        else
            cout<<"quadrangle"<<endl;
    }

}
