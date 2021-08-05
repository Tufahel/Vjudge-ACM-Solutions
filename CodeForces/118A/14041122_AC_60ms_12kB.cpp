#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string st;
    cin>>st;
    string st2="",st1=".";
    int n=st.length();
    for(int i=0; i<n; i++){
        if(st[i]>=65 && st[i]<=92)
            st[i]=st[i]+32;
    }
    for(int i=0; i<n; i++){
        if(st[i]!='a' && st[i]!='e' && st[i]!='i' && st[i]!='o' && st[i]!='u' && st[i]!='y')
            st2=st2+st1+st[i];
    }
    cout<<st2<<endl;
}
