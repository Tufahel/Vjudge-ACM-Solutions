#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str,end;
    while((scanf("%c",&str))==1)
    {
        if(isalpha(str))
        {
            if(str==65||str==69||str==73||str==79||str==85||str==97||str==101||str==105||str==111||str==117)
            {
                while(isalpha(str))
                {
                    printf("%c",str);
                    str=getchar();
                }
                printf("ay");
            }
            else
            {
                 end=str;
                 str=getchar();
                 while(isalpha(str))
                {

                    printf("%c",str);
                    str=getchar();
                }
                printf("%cay",end);
            }
        }
        printf("%c",str);
    }

}