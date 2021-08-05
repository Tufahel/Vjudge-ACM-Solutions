#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i,j;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        int arr[n];
        int high=0,low=0;
        for(j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
        }
        for(j=0; j<n-1; j++)
        {
            if(arr[j]<arr[j+1])
                high++;
            else if(arr[j]>arr[j+1])
                low++;
            //rintf("Array %d %d\n",arr[j],arr[j+1]);
        }
        printf("Case %d: %d %d\n",i+1,high,low);
    }
}
