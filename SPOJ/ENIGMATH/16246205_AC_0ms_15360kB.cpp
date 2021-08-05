#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t,x,y,gcd,lcm;
    cin>>t;
    for(ll i=1; i<=t; i++){
        cin>>x>>y;
        gcd=__gcd(x,y);
        lcm=(x*y)/gcd;
        cout<<lcm/x<<" "<<lcm/y<<endl;
    }
}
