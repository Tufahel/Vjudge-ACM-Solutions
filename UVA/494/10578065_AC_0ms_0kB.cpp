#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    int w=0,i,n;
    while(gets(st))
    {
        n=strlen(st);
        for(i=0; i<n; i++)
        {
            if(((st[i]>='a' && st[i]<='z') || (st[i]>='A' && st[i]<='Z')) && (st[i+1]<'a' || st[i+1]>'z') && (st[i+1]<'A' || st[i+1]>'Z'))
            {
                w++;
            }
        }
        printf("%d\n",w);
        w=0;
    }


}
