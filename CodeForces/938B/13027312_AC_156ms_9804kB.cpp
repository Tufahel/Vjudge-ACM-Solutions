#include<bits/stdc++.h>
#include<string.h>
#define ll long long
#define sc scanf
#define pf printf
#define sz 1000009

using namespace std;

ll arr[sz];
int main()
{
    ll t;
    cin>>t;
    for(ll i=0; i<t; i++)
    {
        cin>>arr[i];
    }
    ll minn1=0;
    for(ll i=0; i<t; i++)
    {
        ll dif=abs(1-arr[i]);
        ll dif1= 1000000-arr[i];
        ll minn=min(dif,dif1);
        if(minn>minn1)
            minn1=minn;
    }
    cout<<minn1<<endl;

}