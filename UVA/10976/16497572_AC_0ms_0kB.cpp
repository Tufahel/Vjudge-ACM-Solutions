#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    while(cin>>n)
    {
        ll y=n+1;
        ll arr1[10000],arr2[10000];
        ll c=0,cnt=0,p,q;
        for(ll i=y; i<=(n*2); i++){
            p=(n*i);
            q=(i-n);
            if(p%q==0){
                arr1[c++]=p/q;
                arr2[cnt++]=i;
            }
        }
        cout<<c<<endl;
        for(ll i=0; i<c; i++){
            cout<<"1/"<<n<<" = "<<"1/"<<arr1[i]<<" + "<<"1/"<<arr2[i]<<endl;
        }
    }
}
