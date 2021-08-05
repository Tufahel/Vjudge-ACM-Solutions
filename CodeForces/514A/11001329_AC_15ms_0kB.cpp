#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    int i,j;
    char ch[22];
    gets(ch);
    int n=strlen(ch);
    for(i=0; i<n; i++)
    {
        if(i==0 && ch[i]=='9')
            continue;
        else if(ch[i]>='5')
        {
            ch[i]='9'-ch[i]+'0';
        }
    }
    printf("%s\n",ch);
}
