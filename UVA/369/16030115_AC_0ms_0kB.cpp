#include<bits/stdc++.h>
#define ll long long
#define Mx 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,a,b;
    while(cin>>a>>b){
        if(a==0 && b==0){
            return 0;
        }
        n=a;
        ll mn=min(b,a-b);
        ll prod=1;
        for(ll i=1; i<=mn; i++){
            prod=(prod*n)/i;
            n--;
        }
        cout<<a<<" things taken "<<b<<" at a time is "<<prod<<" exactly."<<endl;
    }
}
