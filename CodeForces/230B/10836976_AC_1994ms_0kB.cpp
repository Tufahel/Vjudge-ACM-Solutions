#include<stdio.h>
#include<math.h>

using namespace std;
int main()
{
    int m,i;
    long long int a,n,j;
    scanf("%d",&m);
    for(i=1; i<=m; i++)
    {
        scanf("%lld",&a);
        n=sqrt(a);
        for(j=2; j*j<=n; j++)
        {
            if(a%j==0)
            {
                break;
            }

        }
        if(n*n==a && j*j>n && a>1)
          printf("YES\n");
        else
          printf("NO\n");
    }
}
