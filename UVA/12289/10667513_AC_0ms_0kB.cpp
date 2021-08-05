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
        int x=strlen(str);
        if(x>=5)
            printf("3\n");
        else if((str[0]=='t' && (str[1]=='w' || str[2]=='o'))||((str[0]=='t' || str[1]=='w')&& str[2]=='o'))
            printf("2\n");
        else
            printf("1\n");
    }

}
