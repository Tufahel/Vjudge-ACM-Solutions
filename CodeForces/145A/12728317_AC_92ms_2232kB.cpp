#include<bits/stdc++.h>
#include<string.h>

using namespace std;
map<string,int>mp;

int main()
{
    string st;
    string st1;
    cin>>st>>st1;
    int n=st.length();
    int c=0,ct=0;
    for(int i=0; i<n; i++)
    {
        if(st[i]=='4' && st1[i]=='7')
            c++;
        else if(st[i]=='7' && st1[i]=='4')
            ct++;
    }
    int ans=max(c,ct);
    cout<<ans<<endl;
}