#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d,L,i,res,x;
    while(1)
    {
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&L);
        x=0;
        if(a==0 && a==b && b==c && c==d && d==L)
            break;
        for(i=0; i<=L; i++)
        {
            res= (a*pow(i,2))+(b*i)+c;
            if(res%d==0)
                x++;
        }
        printf("%d\n",x);
        //printf("%d\n",res)
    }
}
