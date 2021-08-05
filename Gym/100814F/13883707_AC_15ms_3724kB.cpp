#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll j=0; j<t; j++)
    {
        ll a,b;
        cin>>a>>b;
        if(a==b)
            cout<<"Square"<<endl;
        else
            cout<<"Rectangle"<<endl;
    }

}
