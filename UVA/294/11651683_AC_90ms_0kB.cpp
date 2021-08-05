#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,k,t,maxx,x;
    int a,b,j,maxx1,ttp;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        maxx=0;
        scanf("%d%d",&a,&b);
        for(j=a; j<=b; j++)
        {
            x=0;
            for(k=1; k<=sqrt(j); k++)
            {
                if(j%k==0)
                {
                    /*if(j%k==0)
                        x++;
                    if(j/k!=j && j/k!=k)
                        x++;
                    //if(j/k==k)
                      //  x++;
                    if(j/k==j)*/
                        x++;
                }
                //x++;
            }
            ttp=sqrt(j);
            if(ttp==sqrt(j))
                x=x*2-1;
            else
                x=x*2;
            if(x>maxx)
            {
                maxx=x;
                maxx1=j;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",a,b,maxx1,maxx);
    }
}
