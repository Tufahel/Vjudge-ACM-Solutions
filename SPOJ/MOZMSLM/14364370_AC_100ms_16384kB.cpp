/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 10002
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
//bool isPrime[sz];
ll arr[sz1],num[sz1];
int main()
{
    ll n;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        string st;
        cin>>st;
        ll len=st.size();
        ll c=0;
        for(ll j=0; j<sz1; j++)
            arr[j]=0;
        for(ll j=len-1; j>=0; j--)
        {
            if(st[j]=='s')
                c++;
            arr[j]=c;
        }
        ll ans=0;
        for(ll j=0; j<len; j++)
        {
            if(st[j]=='s')
            {
                for(ll k=j+1; k<len; k++)
                {
                    if(st[k]=='m')
                        ans=ans+arr[k];
                }
            }
        }
        cout<<ans<<endl;
    }
}
