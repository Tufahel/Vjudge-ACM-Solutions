#include<bits/stdc++.h>
#define ll unsigned long long

using namespace std;
ll arr[1000];
ll fibo(ll n,ll m)
{
    ll x,y;
    if(n==1) return 0;
    else if(n==2) return 1;
    else{
        if(arr[n-1]!=0) x=arr[n-1];
        else{
            x=fibo(n-1,m);
            arr[n-1]=x;
        }
        if(arr[n-2]!=0) y=arr[n-2];
        else{
            y=fibo(n-2,m);
            arr[n-2]=y;
        }
        return x+y;
    }
}
int main()
{
    ll x,y,z,n;
    arr[1]=0;
    arr[2]=1;
    x=100;
    y=fibo(x,x);
    cin>>n;
    //cout<<x<<endl;
    /*cin>>n;

    if(n-4>0){
        x=fibo(n-1,n-1);
        y=fibo(n-3,n-3);
        z=fibo(n-4,n-4);
    }
    cout<<fibo(n,n)<<endl;
    return 0;*/
    if(n==2){
        cout<<0<<" "<<1<<" "<<1<<endl;
        return 0;
    }
    if(n==3){
        cout<<1<<" "<<1<<" "<<1<<endl;
        return 0;
    }
    if(n==1){
        cout<<1<<" "<<0<<" "<<0<<endl;
        return 0;
    }
    for(ll i=1; i<100; i++){
        if(n==arr[i]){
            if(arr[i-1]+arr[i-3]+arr[i-4]==n){
                cout<<arr[i-4]<<" "<<arr[i-3]<<" "<<arr[i-1]<<endl;
                return 0;
            }
        }
    }
    cout<<"I'm too stupid to solve this problem"<<endl;
}
