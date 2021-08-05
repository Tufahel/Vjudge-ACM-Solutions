#include<stdio.h>
int main()
{
    int a,b,k,l,x=1;
    scanf("%d%d",&a,&b);
    k=a;
    l=b;
    for( ; ; )
    {
        k=k*3;
        l=l*2;
        if(k<=l)
            x++;
        else
            break;
    }
    printf("%d\n",x);
}
