#include<stdio.h>
int main()
{

    int n,i,x=0,y=0;
    scanf("%d",&n);
    char ch[n];
    scanf("%s",ch);
    for(i=0; i<n; i++)
    {
        if(ch[i]=='A')
            ++x;
        if(ch[i]=='D')
            ++y;
    }
    if(x>y)
        printf("Anton\n");
    else if(y>x)
        printf("Danik\n");
    else
        printf("Friendship\n");
}
