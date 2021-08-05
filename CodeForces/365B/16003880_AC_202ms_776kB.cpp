#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,c=2, mx=2;
    cin>>n;
    ll arr[n+2];
    for(ll i=1; i<=n; i++){
        cin>>arr[i];
    }
    if(n<=2){
        cout<<n<<endl;
        return 0;
    }
    for(ll i=3; i<=n; i++){
        if(arr[i]==arr[i-1]+arr[i-2])
            c++;
        else
            c=2;
        mx=max(c,mx);
    }
    cout<<mx<<endl;

}

