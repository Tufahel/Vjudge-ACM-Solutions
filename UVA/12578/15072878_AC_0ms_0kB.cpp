//'[ْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*//

#include<bits/stdc++.h>
using namespace std;
#define sz2 18409202
#define sz1 700003
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
//bool isPrime[sz];
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;
//long long lazy[sz1];
//long long tree[sz1*4];
//ll arr[sz1*3];
int main()
{
    ll n;
    cin>>n;
    ll arr[6],num[6];
    for(ll i=0; i<n; i++){
        double length,width,square,r,red,green;
        cin>>length;
        width=(6*length)/10.0;
        square=length*width;
        r=length/5.0;
        red=acos(-1)*r*r;
        green=square-red;
        cout<<fixed<<setprecision(2)<<red<<" "<<green<<endl;
    }

}
