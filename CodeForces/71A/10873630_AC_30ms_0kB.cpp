#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{

    int j,m,c=0,flag=0;
    scanf("%d",&m);
    getchar();
    for(j=0; j<m; j++)
    {
        char ch[100],str1,str2;

        gets(ch);
        int n=strlen(ch),i;
        str1=ch[0];
        str2=ch[n-1];
        if(n<=10)
        {
            printf("%s\n",ch);
        }
        else
        {
            for(i=0; i<n; i++)
            {
                c++;
            }
            printf("%c%d%c\n",str1,(c-2),str2);
            c=0;
        }

    }


}

