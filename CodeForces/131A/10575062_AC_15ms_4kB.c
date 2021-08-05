#include<stdio.h>
int main()
{
    int i,n,x=0;
    char str[100];
    gets(str);
    n=strlen(str);
    for(i=1; i<n; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            x++;
        }
    }
    if(x == n-1)
        {
            for(i=0; i<n; i++)
            {
                if(str[i]>='A' && str[i]<='Z')
                    str[i]=97+str[i]-65;
                else if(str[i]>='a' && str[i]<='z')
                    str[i]=65+str[i]-97;
            }
        }

    printf("%s\n",str);
}
