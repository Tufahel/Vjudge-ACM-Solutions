#include<stdio.h>
int main()
{
    int a,b,c,i,sum=0;
    scanf("%d%d",&a,&b);
    for(i=0; i<a; i++)
    {
        scanf("%d",&c);
        sum=sum+c;
    }
    if(sum+(a-1)*10 <= b)
    {
        sum=(b-sum)/5;
        printf("%d\n",sum);
    }
    else
    {
        printf("-1\n");
    }
}
