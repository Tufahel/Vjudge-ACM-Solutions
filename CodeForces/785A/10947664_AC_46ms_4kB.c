#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,sum=0;
    char st[20];
    scanf("%d",&k);
    getchar();
    for(i=0; i<k; i++)
    {

        gets(st);
        int n = strlen(st);
        for(j=0; j<n; j++)
        {
            if(st[j]=='T')
                sum=sum+4;
            else if(st[j]=='C')
                sum=sum+6;
            else if(st[j]=='O')
                sum=sum+8;
            else if(st[j]=='D')
                sum=sum+12;
            else if(st[j]=='I')
                sum=sum+20;
        }

    }
    printf("%d\n",sum);

}
