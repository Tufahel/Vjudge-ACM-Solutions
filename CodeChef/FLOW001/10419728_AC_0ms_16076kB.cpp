#include<stdio.h>
int main()
{
    int i,T,A,B,sum;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d%d",&A,&B);
        sum=A+B;
        printf("%d\n",sum);
    }

}
