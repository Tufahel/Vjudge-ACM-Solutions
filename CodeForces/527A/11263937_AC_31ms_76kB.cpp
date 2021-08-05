#include<stdio.h>
#include<algorithm>

int main()
{
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    long long int ans = a/b;
    long long int c = a-ans*b;
    while(c!=0)
    {
        a=b;
        b=c;
        long long int temp=a/b;
        c=a-temp*b;
        ans=ans+temp;
    }
    printf("%lld\n",ans);
}