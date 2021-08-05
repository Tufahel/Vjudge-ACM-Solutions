#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,i;
    while(scanf("%lld",&a))
    {
        long long int arr[a];
        if(a==0)
            break;
        for(i=0; i<a; i++)
        {
            scanf("%lld",&arr[i]);
        }
        sort(arr,arr+a);
        for(i=0; i<a; i++)
        {
            printf("%lld",arr[i]);
            if(i!=(a-1))
                printf(" ");
        }
        printf("\n");
    }
}
