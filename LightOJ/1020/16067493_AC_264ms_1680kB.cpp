#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    for(ll i=1; i<=n; i++){
        ll a;
        string st;
        cin>>a>>st;
        if(st=="Alice"){
            if(a%3==1)
                cout<<"Case "<<i<<": Bob"<<endl;
            else
                cout<<"Case "<<i<<": Alice"<<endl;
        }
        else if(st=="Bob"){
            if(a%3==0)
                cout<<"Case "<<i<<": Alice"<<endl;
            else
                cout<<"Case "<<i<<": Bob"<<endl;
        }
    }
}
