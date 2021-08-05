#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    int i,n,x,y;
    scanf("%d",&n);
    int num[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("%d %d\n",num[1]-num[0],num[n-1]-num[0]);
    for(i=1; i<n-1; i++)
    {
        x=min(num[i+1]-num[i], num[i]-num[i-1]);
        y=max(num[i]-num[0], num[n-1]-num[i]);
        printf("%d %d\n",x,y);
    }
    printf("%d %d\n",num[n-1]-num[n-2], num[n-1]-num[0]);

}
