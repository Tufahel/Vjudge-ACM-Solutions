#include<stdio.h>
int main()
{
    int i,a,b;
    scanf("%d",&a);
    b=a/2;
    printf("%d\n",b);
    for(i=0; i<b; i++)
    {
        if(a%2==0)
        {
            if(i<b-1)
                printf("2 ");
            else if(i==b-1)
                printf("2");

        }

        else
        {
            if(i<b-1)
                printf("2 ");
            else if(i==b-1)
                printf("3");
        }

    }
    printf("\n");
}
