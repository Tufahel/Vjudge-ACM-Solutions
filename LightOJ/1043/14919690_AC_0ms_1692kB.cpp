#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100003
#define sc scanf
#define pf printf
#define ll int
#define Mx 1000000007
//bool isPrime[sz];
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        double ab,ac,bc,r;
        cin>>ab>>ac>>bc>>r;
        double x=sqrt(r)/sqrt(r+1.0);
        double ad=x*ab;
        cout<<"Case "<<i<<": "<<fixed<<setprecision(8)<<ad<<endl;
    }
}
