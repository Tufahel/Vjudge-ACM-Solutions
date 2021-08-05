#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll make_num(string st)
{
    ll n=st.length();
    ll res,sum=0;
    for(ll i=n-1,j=0; i>=0; i--,j++){
        res=st[i]-48;
        sum=sum+(powl(10,j)*res);
    }
    return sum;
}
ll decimal(ll n)
{
    ll re;
    ll de=0, i=0;
    while(n!=0){
        re=n%10;
        n=n/10;
        de=de+(re*powl(2,i));
        ++i;
    }
    return de;
}


int main()
{
    ios_base::sync_with_stdio(false);
    string st;
    int n;
    cin>>n;
    for(int j=1; j<=n; j++){
        string a="",b="",c="",d="",e="",f="",g="",h="";
        ll a1,b1,c1,d1,e1,f1,g1,h1,dec1,dec2,dec3,dec4;
        cin>>st;
        int len=st.length(),fl=0;
        for(int i=0; i<len; i++){
            if(fl==0){
                //a=a+st[i];
                if(st[i]=='.'){
                    fl++;
                    continue;
                }
                a=a+st[i];
            }else if(fl==1){
                //b=b+st[i];
                if(st[i]=='.'){
                    fl++;
                    continue;
                }
                b=b+st[i];
            }else if(fl==2){
                //c=c+st[i];
                if(st[i]=='.'){
                    fl++;
                    continue;
                }
                c=c+st[i];
            }else{
                d=d+st[i];
            }
        }
        cin>>st;
        len=st.length(),fl=0;
        for(int i=0; i<len; i++){
            if(fl==0){
                //e=e+st[i];
                if(st[i]=='.'){
                    fl++;
                    continue;
                }
                e=e+st[i];
            }else if(fl==1){
                //fl=fl+st[i];
                if(st[i]=='.'){
                    fl++;
                    continue;
                }
                f=f+st[i];
            }else if(fl==2){
                //g=g+st[i];
                if(st[i]=='.'){
                    fl++;
                    continue;
                }
                g=g+st[i];
            }else{
                h=h+st[i];
            }
        }
        a1=make_num(a),b1=make_num(b),c1=make_num(c),d1=make_num(d);
        e1=make_num(e),f1=make_num(f),g1=make_num(g),h1=make_num(h);
        dec1=decimal(e1), dec2=decimal(f1), dec3=decimal(g1),dec4=decimal(h1);
        if(dec1==a1 && dec2==b1 && dec3==c1 && dec4==d1)
            cout<<"Case "<<j<<": Yes"<<endl;
        else
            cout<<"Case "<<j<<": No"<<endl;
        //cout<<a1<<" "<<b1<<" "<<c1<<" "<<d1<<endl;
        //cout<<e1<<" "<<f1<<" "<<g1<<" "<<h1<<endl;
        //cout<<dec1<<" "<<dec2<<" "<<dec3<<" "<<dec4<<endl;
    }
}
