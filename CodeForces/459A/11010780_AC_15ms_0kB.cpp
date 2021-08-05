#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    int x,y,x1,y1,x2,y2,x3,y3,d,flag=0;
    scanf("%d%d%d%d",&x,&y,&x1,&y1);
    if(x==x1)
    {
        d=abs(y-y1);
        x2=x+d;
        y2=y;
        x3=x1+d;
        y3=y1;
    }
    else if(y==y1)
    {
        d=abs(x-x1);
        x2=x;
        y2=y+d;
        x3=x1;
        y3=y1+d;
    }
    else if(abs(x-x1)==abs(y-y1))
    {
        x2=x;
        y2=y1;
        x3=x1;
        y3=y;
    }
    else
    {
        flag=1;
    }
    if(flag==1)
        printf("-1\n");
    else if(flag==0)
        printf("%d %d %d %d\n",x2,y2,x3,y3);

}
