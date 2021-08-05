#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,i,x;
    scanf("%d",&m);
    for(i=0; i<m; i++)
    {
        scanf("%d",&n);
        if(n<38)
        {
            printf("%d\n",n);
            continue;
        }
        x=n%5;
        if(x<3)
        {
            //n=n+(5-x);
            printf("%d\n",n);
            continue;
        }
        else if(x>=3)
        {
            n=n+(5-x);
            printf("%d\n",n);
        }
    }
}
