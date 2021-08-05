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
    string st,st1="";
    cin>>st;
    ll n=st.size();
    for(ll i=0; i<n; i++)
    {
        ll c=0;
        if((st[i]!='1' && st[i]!='4') || st[0]!='1')
        {
            cout<<"NO"<<endl;
            return 0;
        }
        if(st[i]=='1')
        {
            for(ll j=i+1; j<n; j++)
            {
                if(st[j]!='1' && st[j]!='4')
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
                if(st[j]=='4')
                    c++;
                if(st[j]=='1')
                    c=0;
                if(c>2)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"YES"<<endl;
}