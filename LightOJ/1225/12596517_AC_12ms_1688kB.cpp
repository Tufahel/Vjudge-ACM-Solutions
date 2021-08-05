#include<bits/stdc++.h>
#include<string.h>
using namespace std;
map<string,int>mp;
long long int reversDigits(long long int num)
{
    long long int n,m=0;
    while(num!=0)
    {
        n=num%10;
        m=m*10+n;
        num/=10;
    }
    return m;
}
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    long long num;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%lld",&num);
        //long long int k=reversDigits(num);
        if(reversDigits(num)==num)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    }
}
