#include<stdio.h>
int main()
{
    int i,j,m,n;
    scanf("%d%d",&m,&n);
    int x=0, y=m-1;
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            if(i==x && j==y)
            {
                x++;
                y--;
                printf("%d ", n);
            }
            else
                printf("0 ");

        }
        printf("\n");
    }

}
