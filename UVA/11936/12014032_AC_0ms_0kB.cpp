#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,n,i,sum;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a+b)>c)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
}
