#include<stdio.h>
int main()
{
    int i,t,k,n,x=0;
    scanf("%d%d",&t,&k);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        if(n%k==0)
            x++;
    }
    printf("%d\n",x);
}
