#include<stdio.h>
int main()
{
    long long int a,b,dif;
    int i;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        dif=b-a;
        if(dif<0)
            dif=-dif;
        printf("%lld\n",dif);
    }

}
