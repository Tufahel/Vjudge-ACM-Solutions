#include<stdio.h>
int main()
{
    int i,T,m,n,desti,p;
    scanf("%d",&T);
    if(T<=25)
    {
            for(i=1; i<=T; i++)
        {
            scanf("%d%d",&m,&n);
            if(m<=n)
            {
                desti= (4*n)+9+10;
                printf("Case %d: %d\n",i,desti);
            }
            if(m>n)
            {
                p=m-n;
                desti= (p*4)+(m*4)+9+10;
                printf("Case %d: %d\n",i,desti);

            }

        }
    }

}
