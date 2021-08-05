#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,j,x=0;
    cin>>n;
    for(i=0; i<n+1; i++)
    {
        for(j=n; j>i; j--)
        {
            printf("  ");
        }
        for(j=0; j<(i*2)+1; j++)
        {
            //if(j==0 || j==(i*2))
              //  printf("0\t");
            if(j==(i*2))
            {
                printf("%d",x);
            }
            else
            {
                if((j<=((i+i-1)/2)))
                {
                    printf("%d ",x);
                    x++;
                }
                else if(j>((i+i-1)/2))
                {

                    printf("%d ",x);
                    x--;
                }
            }

        }
        x=0;
        printf("\n");

    }
    for(i=n; i>0; i--)
    {
        x=0;
        for(j=n; j>i-1; j--)
        {
            printf("  ");
        }
        for(j=(i*2)-1; j>=0; j--)
        {
            /*if(j==0 || j==(i*2))
                printf("0\t");*/
            if(j==0)
            {
                printf("%d",x);
            }
            else
            {
                if((j>i))
                {
                    printf("%d ",x);
                    x++;
                }
                else if(j<i)
                {

                    printf("%d ",x);
                    x--;
                }
            }

        }
        printf("\n");
    }
}
