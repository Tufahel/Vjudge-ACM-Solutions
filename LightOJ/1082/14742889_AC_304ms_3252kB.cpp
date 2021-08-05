/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100003
#define sc scanf
#define pf printf
#define ll int
#define Mx 1000000007
//bool isPrime[sz];
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;
ll arr[sz1];
ll tree[sz1*3];
void init(ll node, ll b, ll e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return ;
    }
    ll left=node*2;
    ll right=node*2 +1;
    ll mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=min(tree[left],tree[right]);
    //return tree[node];
}
int query(ll node, ll b, ll e, ll i, ll j)
{
    //init(node,b,e);
    if(i>e || j<b)
        return INT_MAX;
    if(b>=i && e<=j)
        return tree[node];
    ll left=node*2;
    ll right=node*2 +1;
    ll mid=(b+e)/2;
    ll p1=query(left, b, mid, i, j);
    ll p2=query(right, mid+1,e,i,j);
    //cout<<"p1 "<<p1<<" "<<"p2 "<<p2<<endl;
    return min(p1,p2);

}
int main()
{
    ll n,m,t;
    sc("%d",&t);
    for(ll k=1; k<=t; k++)
    {
        //cin>>n>>m;
        sc("%d %d",&n, &m);
        for(ll i=1; i<=n; i++)
        {
            sc("%d",&arr[i]);
            //cin>>arr[i];
        }
        init(1,1,n);
        //ll m;
        //cin>>m;
        pf("Case %d:\n",k);
        for(ll i=0; i<m; i++)
        {
            ll x,y;
            sc("%d %d",&x,&y);
            //cin>>x>>y;
            ll t=query(1,1,n,x,y);
            pf("%d\n", t);
            //cout<<t<<endl;
        }
    }
}
