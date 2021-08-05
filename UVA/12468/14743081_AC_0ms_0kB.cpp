/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100001
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
//bool isPrime[sz];
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;
int main()
{
    ll x,y,dist1,dist2;
    while(cin>>x>>y){
        if(x==-1 && y==-1)
            return 0;
        if(y<x)
            swap(x,y);
        dist1=abs((x+100)-y);
        dist2=abs(x-y);
        cout<<min(dist1,dist2)<<endl;
    }
}
