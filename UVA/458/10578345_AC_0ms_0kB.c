#include<stdio.h>

int main()
{
    char ch,str[100];
    while(gets(str) && str != EOF)
    {
        int i;
        for(i=0; str[i]!='\0'; i++)
        {

            ch=str[i];
            str[i]=ch-7;
        }
        printf("%s\n",str);
    }

}

