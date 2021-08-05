#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,arr[3],i,j;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<=2; j++)
        {
            scanf("%d",&arr[j]);
        }
        sort(arr,arr+3);
        printf("Case %d: %d\n",i+1,arr[1]);
    }
}
