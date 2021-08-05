#include<bits/stdc++.h>

using namespace std;

long long re(long long num)
{
    long long r=0;
    while(num!=0)
    {
        r=(num%10)+(r*10);
        num=num/10;
    }
    return r;
}

int main()
{
    int t;
    scanf("%d",&t);
    long long num,x,i,j;
    for(i=0; i<t; i++)
    {
        long long int cnt=0;
        scanf("%lld",&num);
        while(1)
        {
            x=re(num);
            if(num==x)
            {
                printf("%lld %lld\n",cnt,num);
                break;
            }
            else
            {
                num=num+x;
            }
            cnt++;
        }
    }

}
