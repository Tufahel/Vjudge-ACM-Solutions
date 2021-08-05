#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,arr[5][5],p,q;
    for(i=0;i<5;i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0; j<5; j++)
        {
            if(arr[i][j]==1)
            {
                p=abs(j-2);
                q=abs(i-2);
                printf("%d\n",p+q);
            }
        }
    }
    //printf("%d\n",p+q);
}
