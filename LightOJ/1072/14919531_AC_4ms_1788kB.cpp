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
        double R;
        double n;
        cin>>R>>n;
        double a=(R*sin(acos(-1)/n));
        double b=(1.0+sin(acos(-1)/n));
        double r=a/b;
        cout<<"Case "<<i<<": "<<fixed<<setprecision(8)<<r<<endl;
    }
}
