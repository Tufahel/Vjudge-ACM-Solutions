#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int i,n,a[110],j=0,t=0,x=0;
    scanf("%d",&n);
    char str[1010];
    scanf("%s",str);
    for(i=0; i<n; i++)
    {
        if(str[i]=='B')
        {
            x++;
        }
        else
        {
            if(x>0)
            {
                a[j]=x;
                j++;
                t++;

            }
            x=0;
        }
    }
    if(x>0)
    {
        t++;
        a[j]=x;
    }
    else
        j--;
    printf("%d\n",t);
    if(j>=0)
    {
        for(i=0; i<j; i++)
        {
            printf("%d ",a[i]);
        }
        printf("%d\n",a[j]);
    }

}
