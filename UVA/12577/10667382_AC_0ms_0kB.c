#include<stdio.h>
int main()
{
    char ch[6];
    int x=0;
    while(scanf("%s",ch))
    {
        if(!strcmp(ch,"*"))
            break;
        else if(!strcmp(ch,"Hajj"))
            printf("Case %d: Hajj-e-Akbar\n",++x);
        else
            printf("Case %d: Hajj-e-Asghar\n",++x);
    }
    return 0;
}
