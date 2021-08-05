#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,t;
    cin>>n;
    for(ll i=0; i<n; i++){
        cin>>t;
        char ch;ll tk;
        map<char,ll>mp;
        for(ll j=0; j<t; j++){
            cin>>ch>>tk;
            mp[ch]=tk;
        }
        ll m;
        string st;
        cin>>m;
        //getlin(cin,st);
        getchar();
        double sum=0;
        for(ll j=0; j<m; j++){
            getline(cin,st);
            ll sz=st.size();
            for(ll k=0; k<sz; k++){
                sum=sum+mp[st[k]];
            }
        }
        sum=sum/100.0;
        cout<<fixed<<setprecision(2)<<sum<<"$"<<endl;
    }

}
