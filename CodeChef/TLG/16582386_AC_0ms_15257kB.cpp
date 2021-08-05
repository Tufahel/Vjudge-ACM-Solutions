#include<bits/stdc++.h>
#define MX 10000007
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string st;
    int n,a,b,p1=0,p2=0,mx=0,mx1=0;
    cin>>n;
    int f=-1;
    for(int i=1; i<=n; i++){
        cin>>a>>b;
        p1=p1+a;
        p2=p2+b;
        if(p1>p2){
            mx=max(mx,(p1-p2));
            if(mx>mx1)
                f=1;

        }
        else{
            mx1=max(mx1,(p2-p1));
            if(mx1>mx)
                f=2;
        }
        //cout<<p1<<" "<<p2<<endl;
    }
    if(f==1)
        cout<<1<<" "<<mx<<endl;
    else
        cout<<2<<" "<<mx1<<endl;
}
