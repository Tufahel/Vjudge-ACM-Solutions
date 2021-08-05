/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 10000002
#define sz1 11111111
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
int main()
{
    ll n,a,b;
    cin>>n>>a>>b;
    ll arr[n+1],x=a,ans=0;
    for(ll i=1; i<=n; i++)
        cin>>arr[i];
    while(a!=b)
    {
        a=arr[a];
        if(a==x)
        {
            cout<<-1<<endl;
            return 0;
        }
        ans++;
    }
    cout<<ans<<endl;
}