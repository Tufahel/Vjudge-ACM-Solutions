#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll x,y,n;
    cin>>x>>y;
    string st,st1,st2;
    map<string,string>mp;
    map<string,ll>mp1;
    for(ll i=0; i<x; i++){
        cin>>st2>>st1;
        mp[st2]=st1;
        mp1[st2]=1;
    }
    for(ll i=0; i<y; i++){
        cin>>st;
        n=st.size();
        if(mp1[st]==1){
            cout<<mp[st]<<endl;
            continue;
        }
        if(st[n-1]=='o' || st[n-1]=='s' || st[n-1]=='x' || (st[n-2]=='c' && st[n-1]=='h') || (st[n-2]=='s' && st[n-1]=='h')){
            st=st+"es";
            cout<<st<<endl;
            continue;
        }
        if(st[n-1]=='y' && (st[n-2]!='a' && st[n-2]!='e' && st[n-2]!='i' && st[n-2]!='o' && st[n-2]!='u')){
            st[n-1]='i';
            st=st+"es";
        }
        else
            st=st+'s';
        cout<<st<<endl;
    }
}
