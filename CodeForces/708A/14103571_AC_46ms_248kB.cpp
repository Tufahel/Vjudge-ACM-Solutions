#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string st;
    cin>>st;
    ll n=st.size();
    ll k=0;
    for(ll i=0; i<n; i++){
        if(st[i]=='a'){
                k++;
        }
        else
            break;
    }
    if(k==n && st[n-1]=='a'){
        st[n-1]='z';
    }
    for(int i=k; i<n; i++){
        if(st[i]!='a')
            st[i]=st[i]-1;
        else
            break;
    }
    cout<<st<<endl;

}
