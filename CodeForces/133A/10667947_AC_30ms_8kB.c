#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    gets(st);
    int n=strlen(st),i,x=0;
    for(i=0; i<n; i++)
    {
        if(st[i]=='H' || st[i]=='Q' || st[i]=='9')
            {
                x++;
                break;
            }
    }
    if(x==0)
        printf("NO\n");
    else
        printf("YES\n");
}