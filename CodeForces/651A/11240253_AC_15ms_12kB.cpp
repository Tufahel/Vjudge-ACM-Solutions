#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,a,b,x,y,z,r1,r2,temp,temp1;
    scanf("%d%d",&a,&b);
    r1=min(a,b);
    //printf("%d\n",r1);
    r2=max(a,b);
    //printf("%d\n\n",r2);
    temp=r1;
    temp1=r2;
    for(i=1; i<=200 ;i++)
    {
        if(a>1 || b>1)
        {
            temp=temp+1;
            //printf("%d\n\n",temp);
            temp1=temp1-2;
            //printf("%d\n\n",temp1);
            y=temp;
            z=temp1;
            if(temp1==2 || temp1==1)
            {
                temp=min(y,z);
                temp1=max(y,z);
                continue;
            }
            else if(temp<=0 || temp1<=0)
            {
                x=i;
                break;
            }
        }
        else if(a<=1 || b<=1)
        {
                x=i-1;
                break;
        }
    }
    printf("%d\n",x);
}