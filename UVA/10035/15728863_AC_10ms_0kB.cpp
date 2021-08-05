#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //string st,st1,st2;
    ll a,b;
    while(1){
        cin>>a>>b;
        ll num[12]={-1},num1[12]={-1};
        ll n=a,m=b,c=0,d=0,p,q;
        if(a==0 && b==0)
            return 0;
        while(n){
            p=n%10;
            n=n/10;
            num[c++]=p;
        }
        while(m){
            q=m%10;
            m=m/10;
            num1[d++]=q;
        }
        ll mx=max(c,d);
        ll rem=0,sum,cnt=0;
        for(ll i=0; i<=mx; i++){
            //cout<<num[i]<<" ";
            sum=num[i]+num1[i]+rem;
            //cout<<sum<<endl;
            if(sum>9){
                rem=1;
                cnt++;
            }
            else
                rem=0;
        }
        /*for(ll i=mx; i>=0; i--)
            cout<<num[i]<<" ";
        cout<<endl;
        for(ll i=mx; i>=0; i--)
            cout<<num1[i]<<" ";
        cout<<endl;*/
        if(cnt==0)
            cout<<"No carry operation."<<endl;
        else if(cnt==1)
            cout<<"1 carry operation."<<endl;
        else
            cout<<cnt<<" carry operations."<<endl;
        //cout<<cnt<<endl;
    }
}
