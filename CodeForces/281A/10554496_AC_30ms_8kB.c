#include<stdio.h>
int main()
{
    int i,n;
    char str[1000],ch,ch_new;
    gets(str);
    n=strlen(str);
    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            ch=str[0];
            if(ch>96 && ch<123)
            {
                ch_new = ch-32;
                str[0]=ch_new;
            }
            else
            str[i]=ch;
        }

    }
    printf("%s\n",str);
}
