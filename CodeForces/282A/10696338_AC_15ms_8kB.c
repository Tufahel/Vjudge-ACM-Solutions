#include<stdio.h>
#include<string.h>
int main()
{
    char str[5];
    int n,i,x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str);
        if(str[0]=='+' || str[1]=='+')
            x++;
        else
            x--;
    }
    printf("%d\n",x);
}
