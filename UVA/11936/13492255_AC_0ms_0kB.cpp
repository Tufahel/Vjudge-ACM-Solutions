#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll x,y,z;
    for(ll i=0; i<n; i++)
    {
        cin>>x>>y>>z;
        if((x+y)>z)
            cout<<"OK"<<endl;
        else
            cout<<"Wrong!!"<<endl;
    }

}
