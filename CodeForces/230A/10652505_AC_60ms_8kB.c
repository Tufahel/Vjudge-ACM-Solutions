#include<stdio.h>
int main()
{
    int s,n,x,y,i,z=0,ch[1000],ch1[1000],temp,temp1,j;
    scanf("%d%d",&s,&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&x,&y);
        ch[i]=x;
        ch1[i]=y;
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(ch[j]>ch[j+1])
            {
                temp=ch[j];
                ch[j]=ch[j+1];
                ch[j+1]=temp;
                temp1=ch1[j];
                ch1[j]=ch1[j+1];
                ch1[j+1]=temp1;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(s>ch[i])
        {
            z++;
        }
        s=s+ch1[i];
    }
    if(z==n)
        printf("YES\n");
    else
        printf("NO\n");
}