#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100003
#define sc scanf
#define pf printf
#define ll long long int
#define Mx 1000000007
#define PI 2*acos(0)
//bool isPrime[sz];
//bool cmp(pair<ll,ll>a, pair<ll,ll>b)

int main()
{
    ll n;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        ll t,f=0;
        cin>>t;
        //map<ll,string>mp;
        vector<string>v;
        map<string,ll>mp1;
        string st,st1;
        for(ll j=0; j<t; j++)
        {
            //map<ll,string>mp;
            cin>>st;
            v.push_back(st);
        }
        sort(v.begin(),v.end());
        for(ll j=1; j<t; j++)
        {
            st1="";
            //map<string,ll>mp1;
            mp1[v[j-1]]=1;
            //cout<<mp[j-1]<<" OK"<<endl;
            st=v[j];
            //cout<<mp[j]<<" OK1"<<endl;
            ll len=st.size();
            for(ll k=0; k<len; k++)
            {
                st1=st1+st[k];
                //cout<<st1<<" "<<mp1[st1]<<endl;
                if(mp1[st1]==1)
                {
                    f=1;
                    //cout<<st<<" "<<st1<<endl;
                    break;
                }
            }
        }
        if(f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}

