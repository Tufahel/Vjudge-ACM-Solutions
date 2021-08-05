#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch[100000],str[100000];
    scanf("%s",ch);
    int n=strlen(ch);
    int i,j,flag=0;
    for(i=0; i<n; i++)
    {
        str[i]=ch[i];
    }
    for(i=0 ; i<n; i++)
    {
        if((ch[i]=='A' && str[i+1]=='B'))
        {
            for(j=i+2; j<n; j++)
            {
                if((ch[j]=='B' && str[j+1]=='A'))
                {
                    flag=1;
                    break;
                }
            }
            break;
        }

    }
    for(i=0; i<n; i++)
    {
        if((ch[i]=='B' && str[i+1]=='A'))
        {
            for(j=i+2; j<n; j++)
            {
                if((ch[j]=='A' && str[j+1]=='B'))
                {
                    flag=1;
                    break;
                }
            }
            break;
        }

    }

    if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");
}
