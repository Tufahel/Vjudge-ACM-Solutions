#include<bits/stdc++.h>
#define ll long long
#define pf printf
using namespace std;

int main()
{
    double n,p,q;
    cin>>n>>p>>q;
    double ss=p*(n/(p+q));
    pf("%.4lf\n",ss);

}