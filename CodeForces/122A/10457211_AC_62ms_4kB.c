#include<stdio.h>
int main()
{
    int a[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int i,n,loc=-1;
    scanf("%d",&n);
    for(i=0; i<14; i++)
    {
        if(((a[i]==n)||(n%a[i]==0))&&(n<=1000))
        {
            loc=i+1;
            break;
        }

    }
    if(loc==-1)
        printf("NO\n");
    else
        printf("YES\n");
}
