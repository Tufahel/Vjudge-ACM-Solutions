
#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100003
#define sc scanf
#define pf printf
#define ll long long int
#define Mx 1000000007
//bool isPrime[sz];
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;
int main()
{
    ll n,s,sum;
    while((sc("%lld",&n)!=EOF))
    {
        //cin>>n;
        if(n%2==0)
        {
            cout<<0<<endl;
            continue;
        }
        n=n/2;
        s=(n*(2*6+((n-1)*4)))/2;
        s=s+1;
        //cout<<s<<endl;
        sum=s+(s-2)+(s-4);
        cout<<sum<<endl;
    }
}
