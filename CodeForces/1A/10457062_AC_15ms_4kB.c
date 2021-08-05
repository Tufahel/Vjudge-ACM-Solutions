#include<stdio.h>
int main()
{
    long long int m,n,a,b,c,x=1;
    int i;
    scanf("%lld%lld%lld",&m,&n,&a);
    b=m/a;
    c=n/a;
    for(i=1; i<=1; i++)
    {
        if((m%a)==0)
            x=b*x;
        if((n%a)==0)
            x=c*x;
        if((m%a)!=0)
        {
            x=(b+1)*x;
        }
        if((n%a)!=0)
        {
            x=(c+1)*x;
        }
    }
    printf("%lld\n",x);


}
