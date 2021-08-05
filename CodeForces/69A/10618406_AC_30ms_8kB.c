#include<stdio.h>
int main()
{
    int i,n,x,y,z;
    int sum=0, sum1=0, sum2=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        sum=sum+x;
        sum1=sum1+y;
        sum2=sum2+z;
    }
    if(sum==0 && sum==sum1 && sum==sum2)
        printf("YES\n");
    else
        printf("NO\n");
}
