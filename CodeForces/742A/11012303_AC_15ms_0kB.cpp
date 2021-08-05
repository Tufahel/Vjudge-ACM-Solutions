#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
    long long int n;
    scanf("%lld",&n);
    int arr[4]={6,8,4,2};
    if(n==0)
    {
        printf("1\n");
        return 0;
    }
    printf("%d\n",arr[n%4]);

}
