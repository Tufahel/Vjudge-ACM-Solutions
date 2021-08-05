#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,m,n,temp,minn,minn1,minn2,div,mod,abs,maxx=0;
    scanf("%lld%lld",&m,&n);
    temp=m;
    for(i=1; i<n; i++)
    {
        temp=temp-1;
    }
    maxx=(temp*(temp-1))/2;
    //minn=((n-(m%n))*(m/n)*(m/n-1)/2)+((m%n)*(m/n+1)*(m/n)/2);
    div=m/n;
    mod=m%n;
    abs=n-mod;
    minn1=abs*(div*(div-1))/2;
    minn2=mod*(div*(div+1))/2;
    minn=minn1+minn2;
    //printf("%lld %lld\n",minn1,minn2);
    maxx=(temp*(temp-1))/2;
    printf("%lld %lld\n",minn,maxx);

}
