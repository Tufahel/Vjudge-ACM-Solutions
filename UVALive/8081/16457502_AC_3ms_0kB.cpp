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
//bool cmp(pair<ll,ll>a, pair<ll,ll>b)
bool isLeapYear(ll year)
{
    if (year % 400 == 0) return true;
    else if(year % 100 == 0) return false;
    else if(year % 4 == 0) return true;
    else return false;
}
int main()
{
    ll n,d,m,y1,y2;
    cin>>n;
    for(ll i=1; i<=n; i++)
    {
        cin>>d>>m>>y1>>y2;
        if(m==2 && d==29)
        {
            ll c=0;
            for(ll j=y1+1; j<=y2; j++){
                if(isLeapYear(j)==true){
                    c++;
                    //cout<<j<<endl;
                }
            }
            cout<<"Case "<<i<<": "<<c<<endl;
            continue;
        }
        cout<<"Case "<<i<<": "<<y2-y1<<endl;
    }
}

