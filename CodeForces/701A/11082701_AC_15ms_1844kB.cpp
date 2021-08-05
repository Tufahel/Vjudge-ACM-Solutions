#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,a,n,m,j,sum=0;
    scanf("%d",&n);
    int arr[n];
    a=n/2;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    m=sum/a;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]+arr[j]==m)
            {
                arr[j]=0;
                printf("%d %d\n",i+1,j+1);
                break;
            }
        }

    }
}
