#include<stdio.h>
int main()
{
    int i,T,N,temp,first,last;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&N);
        temp=N;
        last=N%10;
        while(N>=10)
        {
            N=N/10;
        }
        first=N;
        printf("%d\n",first+last);
    }

}
