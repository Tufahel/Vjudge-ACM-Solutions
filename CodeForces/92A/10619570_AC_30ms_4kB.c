#include<stdio.h>
int main()
{
    int i,a,b,sum=0;
    scanf("%d%d",&a,&b);
    for(i=1; i<=a ; i++)
    {
        sum=sum+i;

        if(i==a && sum<b)
        {
            i=0;
        }
        if(sum==b)
        {
            sum=sum-b;
            break;
        }
        if(sum>b)
        {
            sum=sum-i;
            sum=b-sum;

            break;
        }
    }
    printf("%d\n",sum);
}
