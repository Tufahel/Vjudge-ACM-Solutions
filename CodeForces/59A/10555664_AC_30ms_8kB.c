#include<stdio.h>

int main()
{
    char ch[100],str;
    gets(ch);
    int n=strlen(ch);
    int i, up=0, low=0;
    for(i=0; i<n; i++)
    {
        if(ch[i]>='a' && ch[i]<='z')
            ++low;
        if(ch[i]>='A' && ch[i]<='Z')
            ++up;
    }

    if(up>low)
    {
        for(i=0; i<n; i++)
        {
             str=ch[i];
            if(str>96 && str<123)
            {
                ch[i]=str-32;
            }
        }
    }
    if(up<low)
    {
        for(i=0; i<n; i++)
        {
             str=ch[i];
            if(str>64 && str<91)
            {
                ch[i]=str+32;
            }
        }
    }
    if(up==low)
    {
        for(i=0; i<n; i++)
        {
             str=ch[i];
            if(str>64 && str<91)
            {
                ch[i]=str+32;
            }
        }
    }
    printf("%s\n",ch);

}
