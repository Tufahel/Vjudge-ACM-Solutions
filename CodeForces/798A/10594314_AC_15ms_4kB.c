#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,n,x,half;
    while(scanf("%s",ch))
    {
        n=strlen(ch);
        int m=n;
        half=n/2;
        n=n-1;
        x=0;

        for(i=0; i<half; i++)
        {
            if(ch[i]!=ch[n-i])
            {
                ++x;
            }

        }

            if((x==1)||((x==0)&&(m%2==1)))
            {
                printf("Yes\n");
                break;
            }
            else
            {
                printf("No\n");
                break;
            }


    }

}
