#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        ll c=0;
        for(ll i=1; i<n; i++)
        {
            for(ll j=i+1; j<=n; j++)
            {
                c=c+__gcd(i,j);
            }
        }
        cout<<c<<endl;
    }
}
