#include<bits/stdc++.h>

using namespace std;

int isPrime(int n)
{
    int i;
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
        if(n==1)
            printf("%d = 0 + 1\n",n);
        if(n==3)
        {
            printf("%d = 0 + 3\n",n);
            continue;
        }
        //sq=sqrt(n)+1;
        for(i=2; i<=n; i++)
        {
            first=isPrime(i);
            if(first==1)
            {
                c=n-i;
                second=isPrime(c);
                if(c==0)
                {
                    printf("%d = %d + %d\n",n,c,i);
                    break;
                }
                if(second==1)
                {
                    printf("%d = %d + %d\n",n,i,c);
                    break;
                }
                else if(second!=0)
                        continue;
            }
            else
                x++;
            //12flag=1;

        }
        if(i>n && n!=1)
        {
            printf("Goldbach's conjecture is wrong.\n");
        }

    }
}
