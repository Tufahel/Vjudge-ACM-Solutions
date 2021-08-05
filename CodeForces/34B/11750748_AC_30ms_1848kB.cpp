#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    int arr[a];
    for(i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+a);
    int sum=0;
    for(i=0; i<b; i++)
    {
        if(arr[i]<=0)
            sum=sum+arr[i];
    }
    printf("%d\n",-1*sum);
}
