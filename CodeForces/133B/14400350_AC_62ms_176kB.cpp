/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 10002
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
#define mod 1000003
//bool isPrime[sz];
//const ll mod=1000003;
ll arr[sz1],num[sz1];
ll decToBin(string s,ll siz)
{
    ll sum=0,x=1;
    for(ll i=siz-1; i>=0; i--){
        if(s[i]=='1'){
            sum=sum+x;
        }
        sum=sum%mod;
        x=x*2;
        x=x%mod;
    }
    return sum;
}
int main()
{
    string st,st1="><+-.,[]",st2[12]={"1000","1001","1010","1011","1100","1101","1110","1111"};
    cin>>st;
    string ch="";
    ll n=st.size();
    for(ll i=0; i<n; i++){
        for(ll j=0; j<8; j++){
            if(st[i]==st1[j]){
                ch=ch+st2[j];
                break;
            }
        }
    }
    ll len=ch.size();
    ll x=decToBin(ch,len);
    cout<<x<<endl;


}
