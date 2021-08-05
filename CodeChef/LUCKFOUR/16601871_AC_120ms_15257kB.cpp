#include<bits/stdc++.h>
#define MX 10000007
#define ll long long
using namespace std;
int main()
{
    ll n,num,mod;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>num;
        ll c=0;
        while(num){
            mod=num%10;
            num=num/10;
            if(mod==4)
                c++;
        }
        cout<<c<<endl;
    }
}
