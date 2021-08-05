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
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    ll a,b,c,d,L;
    while(1){
        cin>>a>>b>>c>>d>>L;
        ll x=0;
        if(a==0 && a==b && b==c && c==d && d==L)
            return 0;
        for(ll i=0; i<=L; i++){
            ll fx=(a*i*i)+(b*i)+c;
            //cout<<fx<<endl;
            if(fx%d==0)
                x++;
        }
        cout<<x<<endl;
    }

}
