
#include<stdio.h>
int main()
{
    int n,i;
    for(i=1;  ;i++)
    {
        scanf("%d",&n);
        if((n==1)||(n==7)||(n==13)||(n==19)||(n==25)||(n==31))
        {
            printf("Case %d: Anjan\n",i);
        }
        else if((n==2)||(n==8)||(n==14)||(n==20)||(n==26))
        {
            printf("Case %d: Sufian\n",i);
        }
        else if((n==3)||(n==9)||(n==15)||(n==21)||(n==27))
        {
            printf("Case %d: Alim\n",i);
        }
        else if((n==4)||(n==10)||(n==16)||(n==22)||(n==28))
        {
            printf("Case %d: Shipu\n",i);
        }
        else if((n==5)||(n==11)||(n==17)||(n==23)||(n==29))
        {
            printf("Case %d: Sohel\n",i);
        }
        else if((n==6)||(n==12)||(n==18)||(n==24)||(n==30))
        {
            printf("Case %d: Sumon\n",i);
        }
        else if(n==0)
            break;

    }
}
