#include<stdio.h>
int main()
{
    int i,a,b,c,t;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d",&a,&b);
        c=a*b;
        if(c%2==0)
            printf("Hasan\n");
        else
            printf("Hussain\n");
    }
}
