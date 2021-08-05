#include<stdio.h>
#include<string.h>
int main()
{
    char str[7];
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",str);
        if((str[0]=='t' && (str[1]=='w' || str[2]=='o'))||((str[0]=='t' || str[1]=='w')&& str[2]=='o'))
            printf("2\n");
        else if((str[0]=='t' && (str[1]=='h' || str[2]=='r'))||((str[0]=='t' || str[1]=='h')&& str[2]=='r'))
            printf("3\n");
        else
            printf("1\n");
    }

}
