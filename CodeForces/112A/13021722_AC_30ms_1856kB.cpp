#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string st,st1;
    cin>>st>>st1;
    int n=st.length();
    for(ll i=0; i<n; i++)
    {
        if(st[i]>=65 && st[i]<=92)
            st[i]=st[i]+32;
        if(st1[i]>=65 && st1[i]<=92)
            st1[i]=st1[i]+32;
    }
    ll c=0,flag=0;
    for(ll i=0; i<n; i++)
    {
        if(st[i]==st1[i])
            c++;
        else if(st1[i]>st[i])
        {
            flag=1;
            break;
        }
        else if(st1[i]<st[i]){
            break;
        }
    }
    if(c==n)
        cout<<0<<endl;
    else if(flag==1)
        cout<<-1<<endl;
    else if(flag==0 && c!=n)
        cout<<1<<endl;
}
