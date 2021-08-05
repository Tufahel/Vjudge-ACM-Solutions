#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll arr[n+1][n+1];
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    ll flag=0;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            if(arr[i][j]!=1){
                flag=0;
                for(ll k=0; k<n; k++){
                    for(ll l=0; l<n; l++){
                        if(arr[k][j]+arr[i][l]==arr[i][j]){
                            flag=1;
                            break;
                        }
                    }
                }
                if(!flag){
                    cout<<"No"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"Yes"<<endl;
}
