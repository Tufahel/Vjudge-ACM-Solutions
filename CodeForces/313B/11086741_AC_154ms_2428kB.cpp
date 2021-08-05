#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch[100000],str[100000];
    gets(ch);
    int n=strlen(ch);
    int arr[100000],i,cs,num1,num2,cnt=0;
    scanf("%d",&cs);
    arr[0]=0;
    for(i=0; i<n; i++)
    {
        str[i]=ch[i];
    }
    for(i=0; i<n-1; i++)
    {
        if(str[i]==ch[i+1])
        {
            cnt++;
        }
        arr[i+1]=cnt;
    }
    for(i=0; i<cs; i++)
    {
        scanf("%d%d",&num1,&num2);
        printf("%d\n",arr[num2-1]-arr[num1-1]);
    }

}
