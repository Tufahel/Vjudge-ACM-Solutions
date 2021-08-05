#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    string st;
    cin>>st;
    ll n=st.length(),ch=0;
    for(ll i=0; i<n; i++)
    {
        if(st[i]<=ch+'a')
        {
            st[i]=ch+'a';
            ch++;
        }
        if(ch==26)
            break;

    }
    if(ch==26)
        cout<<st<<endl;
    else
        cout<<"-1"<<endl;

}
