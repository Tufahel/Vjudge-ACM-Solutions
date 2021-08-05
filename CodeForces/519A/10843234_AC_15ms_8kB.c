#include<stdio.h>
int main()
{

   int i,j,sum=0,sum1=0;
   char disp[10][10];

        for(i=0; i<8; i++)
        {
            for(j=0;j<8;j++)
            {
                scanf("%c", &disp[i][j]);
            }
            getchar();
        }
        for(i=0; i<8; i++)
        {
            for(j=0;j<8;j++)
            {
                if(disp[i][j]=='Q')
                    sum=sum+9;
                else if(disp[i][j]=='R')
                    sum=sum+5;
                else if(disp[i][j]=='B')
                    sum=sum+3;
                else if(disp[i][j]=='N')
                    sum=sum+3;
                else if(disp[i][j]=='P')
                    sum=sum+1;

                else if(disp[i][j]=='q')
                    sum1=sum1+9;
                else if(disp[i][j]=='r')
                    sum1=sum1+5;
                else if(disp[i][j]=='b')
                    sum1=sum1+3;
                else if(disp[i][j]=='n')
                    sum1=sum1+3;
                else if(disp[i][j]=='p')
                    sum1=sum1+1;

            }
        }
        if(sum>sum1)
            printf("White\n");
        else if(sum<sum1)
            printf("Black\n");
        else if(sum==sum1)
            printf("Draw\n");

}

