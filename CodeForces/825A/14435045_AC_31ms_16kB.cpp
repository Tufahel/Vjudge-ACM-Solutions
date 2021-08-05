/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 18400000002
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
    string st;
    cin>>st;
    for(ll i=0; i<n-1; i++)
    {
        if(st[i]=='0')
        {
            if(st[i+1]=='1')
            {
                st[i]='x';
            }
        }
    }
    //cout<<st<<endl;
    ll c=0;
    for(ll i=0; i<n; i++)
    {
        if(st[i]=='x')
        {
            if(c!=0)
                cout<<c;
            c=0;
        }
        else if(st[i]=='0'){
            if(c!=0){
                cout<<c;
                c=0;
            }
            cout<<st[i];

        }
        else if(st[i]=='1')
            c++;
    }
    if(c!=0)
        cout<<c<<endl;
}
