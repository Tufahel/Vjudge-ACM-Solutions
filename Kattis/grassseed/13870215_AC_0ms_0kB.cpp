#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<string,ll>mp;
int main()
{
    double c;
    ll n;
    cin>>c>>n;
    double x,y,sum=0;
    for(ll i=0; i<n; i++)
    {
        cin>>x>>y;
        sum=sum+(x*y);
    }
    printf("%0.7lf\n",sum*c);
}
