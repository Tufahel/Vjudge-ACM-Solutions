#include<bits/stdc++.h>
#define ll long long
using namespace std;

map<ll,ll>a;
int main()
{
    map<string,ll>mp;
    mp["ABSINTH"]=1,mp["BEER"]=1,mp["BRANDY"]=1,mp["CHAMPAGNE"]=1,mp["GIN"]=1;
    mp["RUM"]=1,mp["SAKE"]=1,mp["TEQUILA"]=1,mp["VODKA"]=1,mp["WHISKEY"]=1;
    mp["WINE"]=1;
    ll n,c=0;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        string st;
        cin>>st;
        ll len=st.size(),f=0;
        for(ll j=0; j<len; j++)
        {
            if(!isalpha(st[j]))
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            if(mp[st])
                c++;
            continue;
        }
        ll pow,x=len-1,num=0;
        for(ll j=0; j<len; j++)
        {
            pow=powl(10,x);
            num=num+((st[j]-48)*pow);
            x--;
        }
        if(num<18)
            c++;
        //cout<<num<<endl;

    }
    cout<<c<<endl;
}
