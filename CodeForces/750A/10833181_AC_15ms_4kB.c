#include<stdio.h>
int main()
{
    int a,b,c,i,x,sum=0,m=0;
    scanf("%d%d",&a,&b);
    c=240;
    x=c-b;
    for(i=1; i<=a; i++)
    {
        sum=sum+i*5;
        if(sum<=x)
            m++;
        else
            break;
    }
    printf("%d\n",m);
}
