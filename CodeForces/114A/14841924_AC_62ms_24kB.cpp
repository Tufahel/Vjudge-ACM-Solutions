/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz2 18409202
#define sz1 700003
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
//bool isPrime[sz];
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;
//long long lazy[sz1];
//long long tree[sz1*4];
//ll arr[sz1*3];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll m,c=0,f=0;
    cin>>m;
    ll x=m;
    while(1){
        if(x==n || x%n!=0){
            if(x==n)
                f=1;
            if(x%n!=0)
                c=0;
            break;
        }
        if(x%n==0){
            x=x/n;
            c++;
        }
    }
    if(c==0 && f==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES\n"<<c<<endl;

}
