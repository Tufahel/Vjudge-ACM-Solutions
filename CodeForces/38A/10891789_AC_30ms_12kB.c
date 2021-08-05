#include<stdio.h>
int main()
{
    int i,n,p[102],d,a,b,x,sum=0;
    p[0]=0;
    scanf("%d",&n);
    for(i=1; i<=n-1; i++)
    {
        scanf("%d",&d);
        p[i]=p[i-1]+d;
    }
    scanf("%d%d",&a,&b);
    printf("%d\n",p[b-1]-p[a-1]);
}
