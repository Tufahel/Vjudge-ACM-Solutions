#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,i,x=0;
    scanf("%d%d",&a,&b);
    int n=min(a,b);
    for(i=0; i<n; i++)
    {
        if((a+b)<3 || a==0 || b==0)
            break;
        if(a<=b)
        {
            b=b-2;
            a=a-1;
            x++;
        }
        else
        {
            a=a-2;
            b=b-1;
            x++;
        }


    }
    printf("%d\n",x);
}
