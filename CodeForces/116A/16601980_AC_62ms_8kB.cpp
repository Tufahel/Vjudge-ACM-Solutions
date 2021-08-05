#include<bits/stdc++.h>
#define MX 10000007
#define ll long long
using namespace std;
int main()
{
    ll t,n,m,sum=0,mx=0;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n>>m;
        sum=sum+(m-n);
        mx=max(sum,mx);
    }
    cout<<mx<<endl;
}
