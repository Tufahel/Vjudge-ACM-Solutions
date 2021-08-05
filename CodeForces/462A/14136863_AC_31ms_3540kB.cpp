#include<bits/stdc++.h>
#define ll long long
#define pf printf
using namespace std;
ll arr[110][110];
int main()
{
    ll n;
    cin>>n;
    char ch[105][105];
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=n; j++){
            cin>>ch[i][j];
            if(ch[i][j]=='o')
                arr[i][j]=1;
        }
    }
    ll sum;
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=n; j++){
            sum=arr[i+1][j]+arr[i-1][j]+arr[i][j+1]+arr[i][j-1];
            if(sum%2==1){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
}
