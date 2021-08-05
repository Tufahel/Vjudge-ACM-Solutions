#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
   // cin>>n;
    ll a,b,x=0,y=0,z=0;
    cin>>a>>b;
    for(ll i=1; i<=6; i++){
        if(abs(a-i)<abs(b-i))
            x++;
        else if(abs(a-i)>abs(b-i))
            z++;
        else
            y++;
    }
    cout<<x<<" "<<y<<" "<<z<<endl;
}
