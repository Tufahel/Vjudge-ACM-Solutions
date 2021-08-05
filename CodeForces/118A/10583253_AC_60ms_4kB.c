#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,n;
    scanf("%s",str);
    n=strlen(str);
    for(i=0; i<n; i++)
    {

        if(str[i]<91)
        {
            if(str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U' && str[i]!='Y')

            {
                printf(".%c",str[i]+32);
            }
        }

        else
        {

            if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='y' )
            {
                printf(".%c",str[i]);
            }
        }
    }
    printf("\n");
}
