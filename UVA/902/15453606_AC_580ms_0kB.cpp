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

int main()
{
    ll m;
    string st,st1,st2;
    while(cin>>m>>st)
    {
        //getline(cin, st);
        ll n=st.size(),c=0;
        map<string,ll>mp;
        map<string,ll>::iterator it;
        for (ll i = 0; i < n-m+1; i++)
        {
            st1.assign(st,i,m);
            mp[st1]++;
        }
        ll len,mx=0;;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            len=it->first.size();
            if(len==m && (it->second > mx))
            {
                st2=it->first;
                mx=it->second;
            }
        }
        //cout<<"The string '"<<st<<"' contains "<<c<<" palindromes."<<endl;
        cout<<st2<<endl;

    }
}
