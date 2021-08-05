#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
string res="";
void subString(string s, int n,int p)
{
    string st="";
    int mx=0;
    for (int i=0; i<=n-p; i++)
    {
        for(int j=i; j<i+p; j++)
        {
            st=st+s[j];
        }
        //st=s.substr(i,i+p);
        if(st.size()==p)
            mp[st]++;
        if(mp[st]>mx)
        {
            mx=mp[st];
            res=st;
        }
        st="";
    }
}
int main()
{
    int p,c=0;
    string st;
    while(cin>>p>>st)
    {
        int n=st.size();
        subString(st,n,p);
        cout<<res<<endl;
    }
    return 0;
}
