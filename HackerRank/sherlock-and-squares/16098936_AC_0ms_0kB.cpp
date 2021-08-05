#include<bits/stdc++.h>
#define ll long long
#define sz 100000
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,a,b,x,y;
    cin>>n;
    for(ll i=0; i<n; i++){
        cin>>a>>b;
        x=sqrt(a);
        y=sqrt(b);
        if(x*x==a)
            y+=1;
        cout<<y-x<<endl;
    }

}
