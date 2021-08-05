#include<bits/stdc++.h>
#define ll long double

using namespace std;

int main()
{
    int t;
    cin>>t;
    ll N,K,M;
    for(int i=0; i<t; i++){
        cin>>N>>K>>M;
        ll x=N;
        int c=0;
        while(1){
            x=x*K;
            if(x>M)
                break;
            c++;
        }
        cout<<c<<endl;
    }
}
