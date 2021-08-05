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
    ll a,b,x=0,y=0,z=0;
    cin>>a>>b;
    for(ll i=1; i<=6; i++){
        if(abs(a-i)<abs(b-i))
            x++;
        else if(abs(a-i)>abs(b-i))
            z++;
        else
            y++;
    }
    cout<<x<<" "<<y<<" "<<z<<endl;
}
