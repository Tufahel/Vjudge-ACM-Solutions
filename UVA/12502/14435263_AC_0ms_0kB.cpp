/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 184002
#define sz1 100002
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
#define mod 1000003
//bool isPrime[sz];
//const ll mod=1000003;
//ll arr[sz1],num[sz1],num1[sz1];
int main()
{
    ll n;
    cin>>n;
    double a,b,c,x;
    for(ll i=0; i<n; i++){
        cin>>a>>b>>c;
        if(a>=b){
            x=(c/(a+b))*(a+(a-b));
        }
        if(b>a){
            swap(a,b);
            x=(c/(a+b))*(a+(a-b));
            x=c-x;
        }
        cout<<x<<endl;
    }
}
