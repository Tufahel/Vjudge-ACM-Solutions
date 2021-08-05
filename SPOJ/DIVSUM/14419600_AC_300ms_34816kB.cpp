/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100002
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
#define mod 1000003
bool isPrime[sz];
//const ll mod=1000003;
ll arr[sz1],num[sz1];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    for(ll i=0; i<n; i++){
        ll x,sq,c=0;
        cin>>x;
        sq=sqrt(x);
        for(ll j=1; j<=sq; j++){
            if(x%j==0){
                if(x/j==j)
                    arr[c++]=j;
                else{
                    arr[c++]=j;
                    arr[c++]=x/j;
                }
            }
        }
        sort(arr,arr+c);
        ll sum=0;
        for(ll j=0; j<c-1; j++){
            sum=sum+arr[j];
        }
        cout<<sum<<endl;
    }
}
