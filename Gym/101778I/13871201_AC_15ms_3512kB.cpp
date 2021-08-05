#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[10000];
int main()
{
    ll a,b,x,y,n;
    cin>>n;
    for(ll i=1; i<=n; i++){
        cin>>a>>b>>x>>y;
        ll team1=a+x;
        ll team2=b+y;
        if(team1>team2)
            cout<<1<<endl;
        else if(team1<team2)
            cout<<2<<endl;
        else{
            if(b>x){
                cout<<2<<endl;
            }
            else if(x>b){
                cout<<1<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
}
