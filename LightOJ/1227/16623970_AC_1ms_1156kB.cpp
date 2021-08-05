#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int n,p,q,c=0,sum=0;
        scanf("%d%d%d",&n,&p,&q);
        int arr[n+4];
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
        }
        if(p>n)
        {
            for(int j=0; j<n; j++)
            {
                sum=sum+arr[j];
                c++;
                if(sum>q)
                {
                    c--;
                    break;
                }
            }
        }
        else
        {
            for(int j=0; j<p; j++)
            {
                sum=sum+arr[j];
                c++;
                if(sum>q)
                {
                    c--;
                    break;
                }
            }
        }
        printf("Case %d: %d\n",i,c);
    }
}
