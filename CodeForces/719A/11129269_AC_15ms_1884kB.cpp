#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,i,j,p=1;
    scanf("%d",&a);
    int arr[a];
    for(i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    if(a==1 && arr[0]==0)
    {
        printf("UP\n");
        return 0;
    }
    else if(a==1 && arr[a-1]==15)
    {
        printf("DOWN\n");
        return 0;
    }
    else if(a==1)
    {
        printf("-1\n");
        return 0;
    }
    else if(arr[a-1]==0)
    {
        printf("UP\n");
        return 0;
    }
    else if(arr[a-1]==15)
    {
        printf("DOWN\n");
        return 0;
    }

    else if(arr[a-2]>arr[a-1])
        printf("DOWN\n");
    else if(arr[a-2]<arr[a-1])
        printf("UP\n");


}