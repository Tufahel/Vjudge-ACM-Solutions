#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string st,st1;
    while(cin>>n){
        if(n==0)
            return 0;
        cin>>st;
        st1="";
        map<int,string>mp;
        int c=0,x=0,p=st.size()/n;
        for(int i=0;  ;i++){
            if(c==p){
                reverse(st1.begin(),st1.end());
                mp[x++]=st1;
                //cout<<st1<<endl;
                c=0;
                st1="";
            }
            if(i==st.size())
                break;
            st1=st1+st[i];
            c++;
        }
        for(int i=0; i<x; i++){
            st1=st1+mp[i];
        }
        cout<<st1<<endl;
    }
}
