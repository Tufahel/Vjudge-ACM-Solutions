#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,c,d,i;
    double res,ans;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&c,&d);
        res=((c*(9/5.0))+32)+d;
        ans=(5*(res-32))/9.0;
        printf("Case %d: %.2lf\n",i,ans);
    }

}
