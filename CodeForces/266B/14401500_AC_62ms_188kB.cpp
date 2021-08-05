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
int main()
{
    ll n,m;
    cin>>n>>m;
    string st;
    cin>>st;
    string ch="";
    for(ll i=0; i<m; i++)
    {
        ch="";
        for(ll j=0; j<n; j++)
        {
            if(st[j]=='B' && st[j+1]=='G'){
                ch=ch+'G'+'B';
                j++;
            }
            else
                ch=ch+st[j];
        }
        st=ch;

    }
    cout<<st<<endl;
}
