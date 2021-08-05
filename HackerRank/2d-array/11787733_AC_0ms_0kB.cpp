#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[6][6],i,j,maxx=-100,sum;
    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            //if(sum<maxx)
              //  maxx=sum;
            if(maxx<=sum)
            {
                maxx=sum;
                //printf("%d\t%d\t%d\n\t%d\n%d\t%d\t%d\n",arr[i][j],arr[i][j+1],arr[i][j+2],arr[i+1][j+1],arr[i+2][j],arr[i+2][j+1],arr[i+2][j+2]);
            }


        }
        //printf("\n");
    }
    printf("%d\n",maxx);
}
