#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    int num[n],a[n],temp,temp1;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    if(n>1)
    {
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]<a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=0; i<n; i++)
        {
            if(i==n-1)
                break;
            temp1=a[0]-a[i+1];
            sum=sum+temp1;
        }
    }
    printf("%d\n",sum);

}
