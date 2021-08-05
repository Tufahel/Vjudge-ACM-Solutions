#include <stdio.h>
int main()
{
    int i,j,m,x=0, y=0, z=0;
    char ch;
    while(ch = getchar())
    {
        if(ch=='1')
            x++;
        else if(ch=='2')
            y++;
        else if(ch=='3')
            z++;
        else if(ch=='\n')
            break;
    }

    m=1;
    for(i=0; i<x; i++)
    {
        if(m==1)
        {
            printf("1");
            m=0;
        }
        else
            printf("+1");
    }
    for(i=0; i<y; i++)
    {
        if(m==1)
        {
            printf("2");
            m=0;
        }
        else
            printf("+2");
    }
    for(i=0; i<z; i++)
    {
        if(m==1)
        {
            printf("3");
            m=0;
        }
        else
            printf("+3");
    }
    printf("\n");

}
