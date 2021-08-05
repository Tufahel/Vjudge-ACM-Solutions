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
    ll n;
    cin>>n;
    ll x=n,c=0;
    while(x){
        x=x/10;
        c++;
    }
    ll sum=0;
    for(ll i=c-1; i>=0; i--){
        sum=sum+powl(10,i);
    }
    ll ans=(c*(n+1))-sum;
    cout<<ans<<endl;
}
