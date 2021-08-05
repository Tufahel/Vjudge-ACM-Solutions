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
int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        if(n==1 or n==64 or n==729 or n==4096 or n==15625
                or n==46656 or n==117649 or n==262144 or n==531441
                or n==1000000 or n==1771561 or n==2985984 or n==4826809 or n==7529536
                or n==11390625 or n==16777216 or n==24137569 or n==34012224
                or n==47045881 or n==64000000  or n==85766121)
            cout<<"Special"<<endl;
        else
            cout<<"Ordinary"<<endl;
    }
}
