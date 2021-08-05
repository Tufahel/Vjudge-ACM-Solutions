#include<bits/stdc++.h>

using namespace std;

int isPrime(int n)
{
    int i;
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    int sq,c,first,second,third,i,j,x;
    while(1)
    {
        x=0;
        scanf("%d",&n);
        if(n==0)
            break;
        sq=n/2;
        for(i=2; i<=sq; i++)
        {
            first=isPrime(i);
            if(first==1)
            {
                c=n-i;
                second=isPrime(c);
                if(second==1)
                {
                    //printf("%d:\n%d+%d\n",n,i,c);
                    x++;
                }
                //else if(second!=0)
                       // continue;
            }

        }
        printf("%d\n",x);

    }
}
