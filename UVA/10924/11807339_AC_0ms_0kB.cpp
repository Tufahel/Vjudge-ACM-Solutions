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
    char ch[22];
    int i,pr,abs,sum;
    while(scanf("%s",ch)!=EOF)
    {
        int k=strlen(ch);
        sum=0;
        for(i=0; i<k; i++)
        {
            if(ch[i]>='a' && ch[i]<='z')
            {
                abs=ch[i]-96;
                sum=sum+abs;
            }
            else
            {
                abs=ch[i]-38;
                sum=sum+abs;
            }
        }
        pr=isPrime(sum);
        if(pr==1)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
}
