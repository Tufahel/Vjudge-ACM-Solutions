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
        ll x,prod=2;
        cin>>n;
        x=n;
        if(n%2==1){
            cout<<"Case "<<i<<": Impossible"<<endl;
            i++;
            continue;
        }
        else{
            while(1){
                x=x/2;
                if(x%2==1)
                    break;
                prod=prod*2;
            }
        }
        cout<<"Case "<<i<<": "<<x<<" "<<prod<<endl;
        i++;

    }

}
