#include<stdio.h>
int main()
{
    int i,t;
    long long int p,a,b;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lld%lld",&a,&b);
        p=a*b;
        printf("%lld\n",p);
    }
}
