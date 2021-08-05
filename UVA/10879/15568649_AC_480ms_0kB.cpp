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
ll arr[10000];
ll c=0;
void divisors(ll n)
{
    c=0;
    for(ll i=0; i<10000; i++)
        arr[i]=0;
    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            {
                arr[c++]=i;
            }
            else
            {
                arr[c++]=i;
                arr[c++]=n/i;
            }
        }
    }
    sort(arr,arr+c);
}
int main()
{
    ll n;
    cin>>n;
    for(ll i=1; i<=n; i++){
        ll num;
        cin>>num;
        divisors(num);
        cout<<"Case #"<<i<<": ";
        cout<<num<<" = "<<arr[1]<<" * "<<arr[c-2];
        cout<<" = "<<arr[2]<<" * "<<arr[c-3];
        cout<<endl;
    }
}
