#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[10000];
int main()
{
    ll n;
    ll x;
    cin>>n;
    if(n%3==2){
        x=((n/3)*2)+1;
    }
    else{
        x=(n/3)*2;
    }
    cout<<x<<endl;
}
