#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll arr[4];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    ll ans=(arr[0]+arr[1]+arr[2])/3;
    if(ans>(arr[0]+arr[1]))
       ans=arr[0]+arr[1];
    cout<<ans<<endl;

}
