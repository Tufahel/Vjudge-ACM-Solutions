#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    string st;
    cin>>st;
    ll n=st.size();
    ll d=0,c=0;
    for(ll i=0; i<n; i++){
        if(st[i]=='1'){
            if(d>=7){
                cout<<"YES"<<endl;
                return 0;
            }
            d=0;
            c++;
        }
        if(st[i]=='0'){
            if(c>=7){
                cout<<"YES"<<endl;
                return 0;
            }
            c=0;
            d++;

        }
    }
    if(d>=7 || c>=7){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
}
