#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100003
#define sc scanf
#define pf printf
#define ll long long int
#define Mx 1000000007
#define PI 2*acos(0)
ll leap(ll n)
{
    if(n%400==0)
        return 1;
    else if(n%100==0)
        return 0;
    else if(n%4==0)
        return 1;
    return 0;
}

int main()
{
    ll n,c=5;
    cin>>n;

    string st[10]= {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

    for(ll i=1867; i<=1867+n; i++){
        if(leap(i))
            c=c+2;
        else
            c=c+1;
    }
    //c-=2;
    //for(ll i=0; i<=n; i++)
        //cout<<i<<" "<<v[i].first<<" "<<v[i].second<<endl;
    cout<<st[(c%7)]<<endl;
}
