#include<bits/stdc++.h>
#include<string.h>

using namespace std;
map<string,string>mp;

int main()
{
    string st;
    cin>>st;
    int i,n=st.length();
    for(i=0; i<n; i++)
    {
        if(st[i]=='0')
        {
            st[i]='5';
            break;
        }
    }
    if(i==n)
        st[n-1]='5';
    for(i=0; i<n; i++)
        if(st[i]!='5')
            cout<<st[i];
    cout<<endl;

}
