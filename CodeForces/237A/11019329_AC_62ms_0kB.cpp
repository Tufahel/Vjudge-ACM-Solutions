#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    int i,n,x=1,temp=1,h,m,h1,m1;
    scanf("%d",&n);
    scanf("%d%d",&h,&m);
    h1=h;
    m1=m;
    for(i=0; i<n-1; i++)
    {
        scanf("%d%d",&h,&m);
        if(h==h1 && m==m1)
            x++;
        else
        {
            if(x>temp)
                temp=x;
            x=1;
            h1=h, m1=m;
        }
    }
    if(x>temp)
        temp=x;
    printf("%d\n",temp);
}

