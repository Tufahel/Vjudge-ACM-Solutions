#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll t,n,pow,div;
    cin>>t;
    for(ll i=0; i<t; i++){
        cin>>n;
        ll x=1,sum=0;
        while(1){
            pow=powl(5,x++);
            div=n/pow;
            if(div==0)
                break;
            sum=sum+div;
        }
        cout<<sum<<endl;
    }
}
