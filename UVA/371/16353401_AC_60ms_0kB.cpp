#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    while(scanf("%lld %lld",&n,&m))
    {
        ll mx=1,p=0,y,ans=1;
        if(n>m)
            swap(n,m);
        if(n==0 && m==0)
            return 0;
        else if(n==1 && m<=2){
            cout<<"Between "<<n<<" and "<<m<<", "<<1<<" generates the longest sequence of "<<3<<" values."<<endl;
            continue;
        }
        for(ll i=n; i<=m; i++)
        {

            ll x=i,y=i;
            p=0;
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
            if(p>mx){
                mx=p;
                ans=i;
            }
            //mx=max(p,mx);
        }
        if(p>mx)
            ans=y;
        cout<<"Between "<<n<<" and "<<m<<", "<<ans<<" generates the longest sequence of "<<mx-1<<" values."<<endl;
        //cout<<n<<" "<<m<<" "<<ans<<endl;
    }
}
