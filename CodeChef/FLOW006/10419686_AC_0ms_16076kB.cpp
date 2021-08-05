#include<stdio.h>
int main()
{
    int i,T,N,temp,sum=0;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&N);
        temp=N%10;
        while(N>0)
        {

            sum=temp+sum;
            N=N/10;
            temp=N%10;
        }
        printf("%d\n",sum);
        sum=0;

    }

}
