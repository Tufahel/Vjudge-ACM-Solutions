#include<bits/stdc++.h>
#define ll long long
#define sz 100000
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,a,b,x,y;
    while(cin>>n){
        if(n==0)
            return 0;
        if(n>=101){
            cout<<"f91("<<n<<") = "<<n-10<<endl;
        }
        else
            cout<<"f91("<<n<<") = "<<91<<endl;
    }

}
