
#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100003
#define sc scanf
#define pf printf
#define ll long long int
#define Mx 1000000007
#define PI 2*acos(0)
//bool isPrime[sz];
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;
int main()
{
    int n,a,b,c;
    sc("%d",&n);
    for(int i=1; i<=n; i++){
        sc("%d%d%d",&a,&b,&c);
        int x=a*a+b*b;
        int y=b*b+c*c;
        int z=a*a+c*c;
        if((c*c)==x || (a*a)==y || (b*b)==z){
            pf("Case %d: yes\n",i);
        }
        else
            pf("Case %d: no\n",i);
        if(i==n)
            break;
    }

}
