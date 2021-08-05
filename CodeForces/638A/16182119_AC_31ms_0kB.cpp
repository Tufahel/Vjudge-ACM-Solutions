#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int x,c=0;
    if(m%2==1){
        x=1;
        while(1){
            c++;
            if(x==m){
                cout<<c<<endl;
                return 0;
            }
            x+=2;
        }
    }
    else{
        x=n;
        while(1){
            c++;
            if(x==m){
                cout<<c<<endl;
                return 0;
            }
            x-=2;
        }
    }
}
