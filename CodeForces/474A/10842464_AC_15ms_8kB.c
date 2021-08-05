#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[5];
    gets(str);
    char ch[101];
    gets(ch);
    int n=strlen(ch);
    for(i=0; i<n; i++)
    {
        if(str[0]=='R')
        {
            if(ch[i]=='p')
                ch[i]='o';
            else if(ch[i]=='o')
                ch[i]='i';
            else if(ch[i]=='i')
                ch[i]='u';
            else if(ch[i]=='u')
                ch[i]='y';
            else if(ch[i]=='y')
                ch[i]='t';
            else if(ch[i]=='t')
                ch[i]='r';
            else if(ch[i]=='r')
                ch[i]='e';
            else if(ch[i]=='e')
                ch[i]='w';
            else if(ch[i]=='w')
                ch[i]='q';

            else if(ch[i]==';')
                ch[i]='l';
            else if(ch[i]=='l')
                ch[i]='k';
            else if(ch[i]=='k')
                ch[i]='j';
            else if(ch[i]=='j')
                ch[i]='h';
            else if(ch[i]=='h')
                ch[i]='g';
            else if(ch[i]=='g')
                ch[i]='f';
            else if(ch[i]=='f')
                ch[i]='d';
            else if(ch[i]=='d')
                ch[i]='s';
            else if(ch[i]=='s')
                ch[i]='a';

            else if(ch[i]=='/')
                ch[i]='.';
            else if(ch[i]=='.')
                ch[i]=',';
            else if(ch[i]==',')
                ch[i]='m';
            else if(ch[i]=='m')
                ch[i]='n';
            else if(ch[i]=='n')
                ch[i]='b';
            else if(ch[i]=='b')
                ch[i]='v';
            else if(ch[i]=='v')
                ch[i]='c';
            else if(ch[i]=='c')
                ch[i]='x';
            else if(ch[i]=='x')
                ch[i]='z';

        }
        else
        {
            if(ch[i]=='q')
                ch[i]='w';
            else if(ch[i]=='w')
                ch[i]='e';
            else if(ch[i]=='e')
                ch[i]='r';
            else if(ch[i]=='r')
                ch[i]='t';
            else if(ch[i]=='t')
                ch[i]='y';
            else if(ch[i]=='y')
                ch[i]='u';
            else if(ch[i]=='u')
                ch[i]='i';
            else if(ch[i]=='i')
                ch[i]='o';
            else if(ch[i]=='o')
                ch[i]='p';

            else if(ch[i]=='a')
                ch[i]='s';
            else if(ch[i]=='s')
                ch[i]='d';
            else if(ch[i]=='d')
                ch[i]='f';
            else if(ch[i]=='f')
                ch[i]='g';
            else if(ch[i]=='g')
                ch[i]='h';
            else if(ch[i]=='h')
                ch[i]='j';
            else if(ch[i]=='j')
                ch[i]='k';
            else if(ch[i]=='k')
                ch[i]='l';
            else if(ch[i]=='l')
                ch[i]=';';

            else if(ch[i]=='z')
                ch[i]='x';
            else if(ch[i]=='x')
                ch[i]='c';
            else if(ch[i]=='c')
                ch[i]='v';
            else if(ch[i]=='v')
                ch[i]='b';
            else if(ch[i]=='b')
                ch[i]='n';
            else if(ch[i]=='n')
                ch[i]='m';
            else if(ch[i]=='m')
                ch[i]=',';
            else if(ch[i]==',')
                ch[i]='.';
            else if(ch[i]=='.')
                ch[i]='/';
        }
    }
    printf("%s\n",ch);
}
