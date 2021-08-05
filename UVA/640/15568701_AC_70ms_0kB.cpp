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
//bool cmp(pair<ll,ll>a, pair<ll,ll>b)
bool arr[1000009];
ll c=0;
void generators()
{

    ll n=1;
    ll num[20];
    ll sum;
    for(ll i=1; i<=1000000; i++){
        ll x=i,c=0,p,sum=0;
        num[c++]=i;
        while(x){
            p=x%10;
            num[c++]=p;
            x=x/10;
        }
        for(ll j=0; j<c; j++){
            sum=sum+num[j];
        }
        if(sum>1000000)
            continue;
        arr[sum]=true;

    }
}
int main()
{
    //ll n=20;
    generators();
    for(ll i=1; i<=1000000; i++){
        if(!arr[i])
            cout<<i<<endl;
    }
}
