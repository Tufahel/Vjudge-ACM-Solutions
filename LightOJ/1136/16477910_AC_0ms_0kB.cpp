#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,a,b,x,y,ans,ans1;
    cin>>n;
   /* vector< pair<ll,ll> >v;
    for(ll i=0; i<n; i++){
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }*/
    for(ll i=1; i<=n; i++)
    {
        cin>>a>>b;
        //a=v[i-1].first;
        //b=v[i-1].second;
        x=a/3;
        y=b/3;
        ans=(y-x)*2;
        ans1=ans;
        if(a%3==0 && b%3==2)
            ans+=2;
        else if((a%3==0 && (b%3==0 || b%3==1) && ans1!=0) || (a%3==1 && b%3==2))
            ans++;
        else if(a%3==2 && b%3==2 && a!=b)
            ans++;
        if(ans==0)
            ans++;
        if((a%3==1 && b%3==1) && (a==b))
            ans=0;
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
}
