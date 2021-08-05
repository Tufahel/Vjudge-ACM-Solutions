#include<stdio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main()
{
    char ch[105];
    gets(ch);
    int i,temp=0,ans=0,mm;
    int n=strlen(ch);
    for(i=0; i<n; i++)
    {
        if(ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U' || ch[i]=='Y')
        {
            temp++;
            if(temp>ans)
            {
                ans=temp;
            }
            temp=0;
        }
        else
        {
            if (i<n-1)
                temp++;
            else
            {
                temp+=2;
                if(temp>ans)
                {
                    ans=temp;
                }
            }
        }
    }
    printf("%d\n",ans);

}
