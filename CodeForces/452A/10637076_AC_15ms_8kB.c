#include<stdio.h>
#include<string.h>
int main()
{

    int n;
    char str[100];
    scanf("%d",&n);
    getchar();
    gets(str);
        if(n==8)
        {
            printf("vaporeon\n");
        }
        else if(n==7)
        {
            if(str[0]=='j' || str[1]=='0' || str[3]=='t')
            {
                printf("jolteon\n");
            }
            else if(str[0]=='s' || str[1]=='y' || str[3]=='v')
            {
                printf("sylveon\n");
            }
            else if(str[0]=='u' || str[1]=='m' || str[2]=='b')
            {
                printf("umbreon\n");
            }
            else if(str[0]=='l' || str[1]=='e' || str[3]=='f')
            {
                printf("leafeon\n");
            }
            else if((str[0]=='f') || (str[3]=='r' && str[0]=='f') || (str[1]=='l' && str[3]=='r') || (str[2]=='a' && str[3]=='r'))
            {
                printf("flareon\n");
            }
            else
            {
                printf("glaceon\n");
            }
        }
         else if(n==6)
        {
            printf("espeon\n");
        }


}
