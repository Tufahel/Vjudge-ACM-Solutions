#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,flag;
    scanf("%d",&n);
    int arr[10];
    printf("Lumberjacks:\n");
    for(j=0; j<n; j++)
    {
        flag=0;
        for(i=0; i<10; i++)
        {
            scanf("%d",&arr[i]);
        }

        for(i=1; i<9; i++)
        {
            if((arr[i+1]<arr[i]) && (arr[i-1]<arr[i]))
            {
                printf("Unordered\n");
                flag=0;
                break;
            }
            if((arr[i+1]>arr[i]) && (arr[i-1]>arr[i]))
            {
                printf("Unordered\n");
                flag=0;
                break;
            }
            else
                flag=1;
        }
        if(flag==1)
            printf("Ordered\n");
    }

}
