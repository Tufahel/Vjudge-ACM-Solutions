#include<stdio.h>
int main()
{
    int a,i,x=0,b,c,temp=0;
    scanf("%d%d",&a,&b);
    for(i=0; i<a; i++)
    {
        scanf("%d",&c);
        temp=c-temp;
        if(temp>b)
            x=1;
        else
            x++;
        temp=c;
    }
    printf("%d\n",x);
}
