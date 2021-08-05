#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,m;
    cin>>t;
    ll arr[9];
    for(ll i=1; i<=7; i++)
        cin>>arr[i];
    ll c=1,sum=0;
    while(1){
        if(c==8)
            c=1;
        sum=sum+arr[c];
        if(sum>=t){
            cout<<c<<endl;
            return 0;
        }
        c++;
    }
}
