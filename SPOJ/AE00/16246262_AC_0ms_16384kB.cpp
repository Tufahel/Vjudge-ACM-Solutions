#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll sq,n=1,sum=0;
    cin>>sq;
    while(((sq/n)-(n-1))>0){
        sum=sum+((sq/n)-(n-1));
        n++;
    }
    cout<<sum<<endl;
}
