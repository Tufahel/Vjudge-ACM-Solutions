#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100003
#define sc scanf
#define pf printf
#define ll int
#define Mx 1000000007
//bool isPrime[sz];
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;
int main()
{
    ll n;
    cin>>n;
    for(ll i=0; i<n; i++){
        string st;
        cin>>st;
        ll n=st.size();
        if(n==3){
            if((st[0]=='o' && st[1]=='n') || (st[0]=='o' && st[2]=='e') || (st[1]=='n' && st[2]=='e'))
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
        else if(n==5)
            cout<<3<<endl;
    }

}
