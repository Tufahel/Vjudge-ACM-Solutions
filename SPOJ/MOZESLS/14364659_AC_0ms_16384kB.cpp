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
    string st;
    ll n;
    cin>>st>>n;
    ll len=st.size();
    for(ll i=0; i<n; i++)
    {
        ll a,b;
        cin>>a>>b;
        ll ans=0;
        ll c=0;
        for(ll i=0; i<len; i++){
            arr[i]=0;
        }
        for(ll j=b-1; j>=a-1; j--)
        {
            if(st[j]=='s')
                c++;
            arr[j]=c;
        }
        for(ll j=a-1; j<b; j++)
        {
            if(st[j]=='s')
            {
                for(ll k=j+1; k<b; k++)
                {
                    if(st[k]=='m')
                        ans=ans+arr[k];
                }
            }
        }
        cout<<ans<<endl;
    }
}
