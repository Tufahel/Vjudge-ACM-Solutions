/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 10002
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007

int main()
{
    ll n;
    cin>>n;
    ll arr[n+2];
    for(ll i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    ll x=1,y=2,z=3,ch=0,bi=0,ba=0;
    for(ll i=1; i<=n; i++)
    {
        if(i==x)
        {
            x+=3;
            ch=ch+arr[i];
        }
        else if(i==y)
        {
            y+=3;
            bi=bi+arr[i];
        }
        else if(i==z)
        {
            z+=3;
            ba=ba+arr[i];
        }
    }
    if(ch>bi && ch>ba)
        cout<<"chest"<<endl;
    else if(bi>ch && bi>ba)
        cout<<"biceps"<<endl;
    else if(ba>bi && ba>ch)
        cout<<"back"<<endl;
}
