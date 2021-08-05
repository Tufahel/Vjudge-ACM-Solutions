#include<bits/stdc++.h>
#define ll long long
#define sz 100000
using namespace std;
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
