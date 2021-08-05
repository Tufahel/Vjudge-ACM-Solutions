#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
    int i,j,a,b,n,c=0;
    scanf("%d",&a);
    int a1[a];
    for(i=0; i<a; i++)
    {
        scanf("%d",&a1[i]);
    }
    sort(a1,a1+a);
    scanf("%d",&b);
    int b1[b];
    for(i=0; i<b; i++)
    {
        scanf("%d",&b1[i]);
    }
    sort(b1,b1+b);
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
           if(abs(a1[i]-b1[j])<=1)
           {
               c++;
               b1[j]=200;
               break;
           }
        }
    }
    printf("%d\n",c);
}
