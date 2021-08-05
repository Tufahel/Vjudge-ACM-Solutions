#include<stdio.h>
#include<string.h>
char st[200],st1[200],st2[200],rem[2000];
int main()
{
    int n,len1,len2,i,j,k;
    scanf("%d",&n);
    getchar();
    getchar();
    while(n--)
    {
        gets(st);
        gets(st1);
        len1=strlen(st);
        memset(rem,-1,sizeof(rem));
        for(k=0; k<len1; k++)
        {
            rem[st[k]]=st1[k];
        }
        puts(st1);
        puts(st);
        while(gets(st2))
        {
            len2=strlen(st2);
            if(len2==0)
                break;
            for(j=0; j<len2; j++)
            {
                if(rem[st2[j]]==-1)
                    putchar(st2[j]);
                else
                    putchar(rem[st2[j]]);
            }
            putchar('\n');
        }
        if(n!=0)
            putchar('\n');
    }
}
