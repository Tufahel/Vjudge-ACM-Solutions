#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,x=0;
    scanf("%d%d",&n,&m);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n, greater<int>());
    int sum=arr[0];

    for(i=0; i<n; i++)
    {
        if(arr[i]<=m)
        {
            m=m-arr[i];
            x++;
        }
        else if(arr[i]>m && m>0)
        {
            x++;
            break;
        }
    }
    printf("%d\n",x);
}
