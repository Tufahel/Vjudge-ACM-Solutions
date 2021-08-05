#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,m;
    cin>>t;
    for(ll i=1; i<=t; i++){
        cin>>n>>m;
        ll div,a1,a2,d,s1,s2,ans;
        div=n/m;
        if(div%2==0){
            a1=(m*(m+1))/2;
            a2=powl(m,2)+a1;
            d=powl(m,2)*2;
            s1=(div/2)*(2*a1+(div-1)*d);
            s2=(div/2)*(2*a2+(div-1)*d);
            ans=s2-s1;
        }
        else if(div%2==1){
            a1=(m*(m+1))/2;
            a2=powl(m,2)+a1;
            d=powl(m,2)*2;
            s1=((div+1)/2)*(2*a1+(div-1)*d);
            s2=(div/2)*(2*a2+(div-1)*d);
            ans=s2-s1;
        }
        cout<<"Case "<<i<<": "<<ans/2<<endl;
    }
}
