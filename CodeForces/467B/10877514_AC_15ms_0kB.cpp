#include<stdio.h>
int main()
{
    int i,j,n,m,k,a[1010],p=0,count=0;
    scanf("%d%d%d",&n,&m,&k);
    for(i=0; i<(m+1); i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(((a[i]>>j)&1) != ((a[m]>>j)&1))
                count++;
        }
        if(count<=k)
            p++;
        count=0;
    }
    printf("%d\n",p);
}
