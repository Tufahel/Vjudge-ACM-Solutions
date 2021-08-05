#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j,sum;
    scanf("%d",&t);
    getchar();
    for(i=0; i<t; i++)
    {
        char st[1000];
        gets(st);
        sum=0;
        int len=strlen(st);
        for(j=0; j<len; j++)
        {
            if(isalpha(st[j]))
            {
                if((st[j]=='a' || st[j]=='d' || st[j]=='g' || st[j]=='j' || st[j]=='m' || st[j]=='p' || st[j]=='t' || st[j]=='w'))
                    sum=sum+1;
                else if((st[j]=='b' || st[j]=='e' || st[j]=='h' || st[j]=='k' || st[j]=='n' || st[j]=='q' || st[j]=='u' || st[j]=='x'))
                    sum=sum+2;
                else if((st[j]=='c' || st[j]=='f' || st[j]=='i' || st[j]=='l' || st[j]=='o' || st[j]=='r' || st[j]=='v' || st[j]=='y'))
                    sum=sum+3;
                else if(st[j]=='s' || st[j]=='z')
                    sum=sum+4;
            }
            else
                sum=sum+1;
        }
        printf("Case #%d: %d\n",i+1,sum);
    }
}