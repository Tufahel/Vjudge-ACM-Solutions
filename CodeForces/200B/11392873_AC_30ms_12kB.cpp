#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n;
    double a,sum=0,prod;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lf",&a);
        sum=sum+(a/100.0);
    }
    prod= (sum/n)*100;
    printf("%.12lf\n",prod);
}
