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
    string st,st1,st2;
    while(getline(cin, st))
    {
        ll n=st.size(),c=0;
        map<string,string>mp;
        map<string,string>::iterator it;
        for (ll i = 0; i < n; i++){
            for (ll len = 1; len <= n - i; len++){
                st1=st.substr(i,len);
                mp[st1]=st1;
            }
        }
        for(it=mp.begin(); it!=mp.end(); it++){
            st1=it->first;
            st2=st1;
            reverse(st2.begin(),st2.end());
            if(st2==st1)
                c++;
        }
        cout<<"The string '"<<st<<"' contains "<<c<<" palindromes."<<endl;
        //cout<<c<<endl;

    }
}
