#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main()
{
    int a,b,c,d,p,q;
    long long int ans,ans1;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    p= min(a,min(c,d));
    ans=p*256;
    q= min(a-p,b);
    ans1=ans+q*32;
    printf("%lld\n",ans1);
}
