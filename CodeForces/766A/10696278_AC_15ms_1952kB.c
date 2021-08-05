#include<stdio.h>
#include<string.h>
int main()
{
    int m,n;
    char ch[1000000], st[1000000];
    gets(ch);
    gets(st);
    m=strlen(ch);
    n=strlen(st);
    if(!strcmp(ch,st))
        printf("-1\n");
    else
    {
        if(m>n)
            printf("%d\n",m);
        else
            printf("%d\n",n);
    }
}
