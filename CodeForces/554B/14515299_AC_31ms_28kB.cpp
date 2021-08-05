/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 1000002
#define sc scanf
#define pf printf
#define ll unsigned long long
#define Mx 1000000007
#define mod 1000003
//bool arr[sz1];
//ll arr[sz1];
map<string,ll>mp;
//bool isPrime[sz];
//bool divi[sz];
//const ll mod=1000003;
//num[sz1],num1[sz1];
int main()
{
    ll n,c=0;
    cin>>n;
    string st;
    while(n--){
        cin>>st;
        mp[st]++;
        c=max(c,mp[st]);
    }
    cout<<c<<endl;


}
