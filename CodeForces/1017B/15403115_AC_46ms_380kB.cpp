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
    ll n,only_one=0,only_zero=0,one_zero=0,zero_one=0;
    cin>>n;
    string st,st1;
    cin>>st>>st1;
    for(ll i=0; i<n; i++){
        if(st[i]=='1'&&st1[i]=='1')
            only_one++;
        else if(st[i]=='0'&&st1[i]=='0')
            only_zero++;
        else if(st[i]=='1'&&st1[i]=='0')
            one_zero++;
        else if(st[i]=='0'&&st1[i]=='1')
            zero_one++;
    }
    ll ans=(only_one*only_zero)+(only_zero*one_zero)+(zero_one*one_zero);
    cout<<ans<<endl;

}
