#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,temp,x=0;
    scanf("%d%d",&n,&m);
    int arr[n+3];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //sort(arr,arr+n+2);
    x=1;
    temp=m;
    for(i=0; i<n; i++)
    {
        if(arr[i]<=temp)
        {
            temp=temp-arr[i];
        }
        else
        {
            x++;
            temp=m-arr[i];
        }
    }
    printf("%d\n",x);
}
