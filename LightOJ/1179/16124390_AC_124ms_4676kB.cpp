#include<bits/stdc++.h>
#define ll long long
#define sz 100000
using namespace std;

ll remainder(ll n,ll k)
{
    if(n==1)
        return 0;
    return (remainder(n-1,k)+k)%n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,k,i=1;
    cin>>t;
    while(t--){
        ll x;
        cin>>n>>k;
        x=remainder(n,k);
        cout<<"Case "<<i<<": "<<x+1<<endl;
        i++;
    }

}
