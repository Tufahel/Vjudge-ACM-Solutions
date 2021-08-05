#include<stdio.h>
#include<string.h>
int main()
{
    char str[102],str1[102];
    gets(str);
    gets(str1);
    int n=strlen(str),i;
    for(i=0; i<n; i++)
    {
        if(str[i]==str1[i])
        {
            str[i]='0';
        }
        else
            str[i]='1';
    }
    printf("%s",str);

}
