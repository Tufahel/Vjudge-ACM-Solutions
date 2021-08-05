#include<bits/stdc++.h>
using namespace std;
#define sz 100007
#define sz1 10007
#define sc scanf
#define pf printf
#define ll long long int
#define Mx 9999
#define PI 2*acos(0)
//bool isPrime[sz];
//bool cmp(pair<ll,ll>a, pair<ll,ll>b)
int main()
{
    int n,div;
    cin>>n;
    div=n/2;
    cout<<div<<endl;
    int x=n;
    while(div>0){
        if(div==1 && x==3){
            cout<<3;
            div--;
            break;
        }
        cout<<2<<" ";
        div--;
        x-=2;
    }
    cout<<endl;
}
