#include<bits\stdc++.h>

using namespace std;

int main()
{
    int n,i;
    char ch[10000];
    scanf("%d",&n);
    getchar();
    scanf("%s",ch);
    //getchar();
    if(n%2==1)
    {
        for(i=n-1; i>=0; i--)
        {
            if(i%2==1)
                printf("%c",ch[i]);
        }
        for(i=0; i<n; i++)
        {
            if(i%2==0)
                printf("%c",ch[i]);
        }
    }
    else
    {
        for(i=n-1; i>=0; i--)
        {
            if(i%2==0)
                printf("%c",ch[i]);
        }
        for(i=0; i<n; i++)
        {
            if(i%2==1)
                printf("%c",ch[i]);
        }
    }
    printf("\n");
}
