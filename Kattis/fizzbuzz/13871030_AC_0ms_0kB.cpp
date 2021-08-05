#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[10000];
int main()
{
    ll x,y,n;
    cin>>x>>y>>n;
    for(ll i=1; i<=n; i++){
        if(i%x==0 && i%y==0)
        {
            cout<<"FizzBuzz"<<endl;
            continue;
        }
        else if(i%x==0)
        {
            cout<<"Fizz"<<endl;
        }
        else if(i%y==0){
            cout<<"Buzz"<<endl;
        }
        else
            cout<<i<<endl;

    }
}
