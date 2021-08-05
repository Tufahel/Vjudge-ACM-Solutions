#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j;
    //int arr[1000];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
        }
        sort(arr, arr+n);
        printf("Case %d: %d\n",i,arr[(n-1)/2]);
    }
}
