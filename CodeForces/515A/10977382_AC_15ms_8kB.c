#include<stdio.h>
int main()
{
    long long x,y,s,a;
    scanf("%lld%lld%lld",&x,&y,&s);
    if(x<0)
        x=-x;
    if(y<0)
        y=-y;
    a=x+y;
    s=s-a;
    if(s%2==0 && s>=0)
        printf("Yes\n");
    else
        printf("NO\n");

}
