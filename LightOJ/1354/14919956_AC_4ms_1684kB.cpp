/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz2 18409202
#define sz1 700003
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
//bool isPrime[sz];
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;
//long long lazy[sz1];
//long long tree[sz1*4];
//ll arr[sz1*3];
ll decToBin(string s,ll siz)
{
    ll sum=0,x=1;
    for(ll i=siz-1; i>=0; i--)
    {
        if(s[i]=='1')
        {
            sum=sum+x;
        }
        //sum=sum%mod; //mod 1000003
        x=x*2;
        //x=x%mod;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string dot;
    ll n;
    cin>>n;
    for(ll i=1; i<=n; i++){
        string st,st1;
        cin>>st>>st1;
        string a="",b="",c="",d="",k="",l="",m="",o="";
        for(ll j=0; j<8; j++){
            a=a+st1[j];
            b=b+st1[j+9];
            c=c+st1[j+18];
            d=d+st1[j+27];
        }
        ll w,x,y,z,s;
        w=decToBin(a,a.size());
        ll ww=w;
        while(w>0){
            s=w%10;
            char ch=s+48;
            k=ch+k;
            w=w/10;
        }
        x=decToBin(b,b.size());
        ll xx=x;
        while(x>0){
            s=x%10;
            char ch=s+48;
            l=ch+l;
            x=x/10;
        }
        y=decToBin(c,c.size());
        ll yy=y;
        while(y>0){
            s=y%10;
            char ch=s+48;
            m=ch+m;
            y=y/10;
        }
        z=decToBin(d,d.size());
        ll zz=z;
        while(z>0){
            s=z%10;
            char ch=s+48;
            o=ch+o;
            z=z/10;
        }
        if(ww==0)
            k="0";
        if(xx==0)
            l="0";
        if(yy==0)
            m="0";
        if(zz==0)
            o="0";
        string ans=k+"."+l+"."+m+"."+o;
        //cout<<ans<<endl;
        if(ans==st)
            cout<<"Case "<<i<<": Yes"<<endl;
        else
            cout<<"Case "<<i<<": No"<<endl;

    }


}
