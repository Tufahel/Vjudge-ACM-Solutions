#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100003
#define sc scanf
#define pf printf
#define ll long long int
#define Mx 1000000007
#define PI 2*acos(0)
//bool isPrime[sz];
//bool cmp(pair<ll,ll>a, pair<ll,ll>b)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,h,a,b,q;
    cin>>n>>h>>a>>b>>q;
    for(ll i=0; i<q; i++)
    {
        ll ta,fa,tb,fb,rem,dif,dif1,ans;
        ll mx=1000000007;
        cin>>ta>>fa>>tb>>fb;
        if(ta==tb)
        {
            cout<<abs(fa-fb)<<endl;
            continue;
        }
        if(fa>=a && fa<=b)
        {
            rem=0;
            ans=abs(ta-tb)+abs(fa-fa)+abs(fb-fa);
            cout<<ans<<endl;
            continue;
        }
        if(fb>=a && fb<=b)
        {
            ans=abs(ta-tb)+abs(fa-fb)+abs(fb-fb);
            cout<<ans<<endl;
            continue;
        }
        if(fa<a)
        {
            rem=a;
            dif=abs(fa-a);
            if(fb<a)
            {
                ans=abs(ta-tb)+abs(fa-a)+abs(fb-a);
                cout<<ans<<endl;
                continue;
                //dif=abs(fb-a);
            }
            if(fb>b)
            {
                dif1=abs(fb-b);
                if(dif<dif1)
                {
                    ans=abs(ta-tb)+abs(fa-a)+abs(fb-a);
                    cout<<ans<<endl;
                    continue;
                }
                else
                {
                    ans=abs(ta-tb)+abs(fa-b)+abs(fb-b);
                    cout<<ans<<endl;
                    continue;
                }
            }
        }
        if(fa>b)
        {
            rem=b;
            dif=abs(fa-b);
            if(fb>b)
            {
                ans=abs(ta-tb)+abs(fa-b)+abs(fb-b);
                cout<<ans<<endl;
                continue;
            }
            if(fb<a)
            {
                dif1=abs(fb-a);
                if(dif<dif1)
                {
                    ans=abs(ta-tb)+abs(fa-b)+abs(fb-b);
                    cout<<ans<<endl;
                    continue;
                }
                else
                {
                    ans=abs(ta-tb)+abs(fa-a)+abs(fb-a);
                    cout<<ans<<endl;
                    continue;
                }
            }
        }
    }
}

