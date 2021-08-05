#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,x,y,a,b;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>x>>y;
        if((x+y)%2==1 || (x<y))
            cout<<"impossible"<<endl;
        else{
            a=(x+y)/2;
            b=(x-y)/2;
            cout<<a<<" "<<b<<endl;
        }
    }
}
