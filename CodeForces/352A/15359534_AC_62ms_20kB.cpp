
#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100003
#define sc scanf
#define pf printf
#define ll long long int
#define Mx 1000000007
#define PI 2*acos(0)
//bool isPrime[sz];
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;
int main()
{
    ll n,zero=0,five=0,x,c=0;
    cin>>n;
    ll arr[n+2];
    for(ll i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==0){
            zero++;
            c=1;
        }
        else if(arr[i]!=0)
            five++;
    }
    if(zero>0 && five<9){
        cout<<0<<endl;
        return 0;
    }
    if(zero==0){
        cout<<-1<<endl;
        return 0;
    }
    else if(five>9){
        x=five/9;
        five=x*9;
    }
    for(ll i=0; i<five; i++){
        cout<<5;
    }
    for(ll i=0; i<zero; i++){
        cout<<0;
    }
    cout<<endl;
}
