#include<bits/stdc++.h>
#include<string.h>
#define ll long long
using namespace std;
map<string,int>mp;
ll binary(ll a)
{
    ll r;
    ll binary=0;
    ll i=1;
    while(a!=0)
    {
        r=a%2;
        a=a/2;
        binary=binary+(r*i);
        i=i*10;
    }
    return binary;
}
int main()
{
    ll t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        ll a,b,c,d,e,f,g,h;
        char ch;
        cin>>a>>ch>>b>>ch>>c>>ch>>d;
        cin>>e>>ch>>f>>ch>>g>>ch>>h;
        if(binary(a)==e && binary(b)==f && binary(c)==g && binary(d)==h)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    }
}
