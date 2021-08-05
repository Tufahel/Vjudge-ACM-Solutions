#include<bits/stdc++.h>
#define ll long long
#define sz 100000
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    while(cin>>n){
        if(n<0)
            return 0;
        else
            cout<<((n*(n+1))/2)+1<<endl;
    }

}
