#include<bits/stdc++.h>

using namespace std;

long long int isPrime(long long int n)
{
    long long int i;
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
    //char ch[22];
    long long int i,j,t;
    while(scanf("%lld",&t)!=EOF)
    {
        long long int in = t;
        long long int out = 0;
        while(in)
        {
            out *= 10;
            out += in % 10;
            in /= 10;
        }
        long long int pr=isPrime(t);
        long long int res=isPrime(out);
        if(t==out && res==1)
            res=0;
        if(pr==1 && res==1)
            printf("%lld is emirp.\n",t);
        else if(pr==1 && res!=1)
            printf("%lld is prime.\n",t);
        else
            printf("%lld is not prime.\n",t);
    }

}
