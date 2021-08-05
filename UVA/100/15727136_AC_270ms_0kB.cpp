#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    while(scanf("%lld %lld",&n,&m)!=EOF)
    {
        ll mx=1,s=0;
        if(n>m){
            s=1;
            swap(n,m);
        }
        for(ll i=n; i<=m; i++)
        {

            ll x=i,p=0;
            if(x)
                p++;
            while(x>1)
            {
                if(x%2==1)
                    x=x*3+1;
                else
                    x=x/2;
                p++;
            }
            mx=max(p,mx);
        }
        if(s==1)
            swap(n,m);
        cout<<n<<" "<<m<<" "<<mx<<endl;
    }
}
