#include<stdio.h>
#include<string.h>
int str[10000010];
int main()
{
    int a,b,c,d,i,j,count=1,place=1;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        scanf("%d",&b);
        for(j=place; j<b+place; j++)
        {
            str[j]=count;
        }
        place=place+b;
        count++;
    }
    scanf("%d",&c);
    for(i=0; i<c; i++)
    {
        scanf("%d",&d);
        printf("%d\n",str[d]);
    }
}
