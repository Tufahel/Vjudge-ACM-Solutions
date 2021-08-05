#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y,c,gcd;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x>>y>>c;
        gcd=__gcd(x,y);
        if(c%gcd)
            cout<<"Case "<<i<<": No"<<endl;
        else
            cout<<"Case "<<i<<": Yes"<<endl;

    }
}