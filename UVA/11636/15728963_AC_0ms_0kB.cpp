#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll arr[100005];
void rem()
{
    arr[0]=0;
    arr[1]=0;
    arr[2]=1;
    ll x,y,flag=0;
    for(ll i=2; ;){
        x=i+1;
        y=i*2;
        for(ll j=x; j<=y; j++){
            arr[j]=arr[i]+1;
            if(j>10001){
                flag=1;
                break;
            }
        }
        i=y;
        if(flag==1)
            break;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //string st,st1,st2;
    rem();
    ll n;
    ll c=0;
    while(cin>>n){
        if(n<0)
            return 0;
        c++;
        cout<<"Case "<<c<<": "<<arr[n]<<endl;
    }
}
