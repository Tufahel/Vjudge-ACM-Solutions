#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll x,y,ans;
    ll num1[20],num2[20],num3[20];
    for(ll i=0; i<n; i++){
        cin>>x>>y;
        ll res1=x,res2=y,res3,mod,c1=0,c2=0,c3=0;
        while(res1){
            mod=res1%10;
            res1=res1/10;
            num1[c1++]=mod;
        }
        while(res2){
            mod=res2%10;
            res2=res2/10;
            num2[c2++]=mod;
        }
        //reverse(num1,num1+c1);
        //reverse(num2,num2+c2);
        ll p=0,sum=0,sum1=0,sum2=0;
        for(ll j=c1-1; j>=0; j--){
            sum=sum+(num1[j]*powl(10,p));
            p++;
        }
        p=0;
        for(ll j=c2-1; j>=0; j--){
            sum1=sum1+(num2[j]*powl(10,p));
            p++;
        }
        res3=sum+sum1;
        while(res3){
            mod=res3%10;
            res3=res3/10;
            num3[c3++]=mod;
        }
        p=0;
        for(ll j=c3-1; j>=0; j--){
            sum2=sum2+(num3[j]*powl(10,p));
            p++;
        }
        cout<<sum2<<endl;
        //cout<<sum<<" "<<sum1<<endl;
    }
}
