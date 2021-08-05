#include<bits/stdc++.h>
#define ll long long
#define sz 100000
using namespace std;

void ff(ll n)
{
    ll p=n;
    for(ll i=0; i<102; i++)
    {
        if(n==101){
            cout<<"f91("<<p<<") = "<<n-10<<endl;
            break;
        }
        if(n<=100)
            n=n+11;
        else
            n=n-10;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,a,b,x,y;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        if(n>=101)
        {
            cout<<"f91("<<n<<") = "<<n-10<<endl;
        }
        else
            ff(n);
    }

}
