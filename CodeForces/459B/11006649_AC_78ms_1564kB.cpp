#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i;
    scanf("%lld",&n);
    long long int a[n+2],t,x=0,y=0;
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    sort(a, a+n);
    for(i=0; i<n; i++)
    {
        if(a[0]==a[i])
            x++;
        else
            break;
    }
    for(i=n-1; i>=0; i--)
    {
        if(a[n-1]==a[i])
            y++;
        else
            break;
    }

    if(a[0]==a[n-1])
    {
        t=(n*(n-1)/2);
        printf("%lld %lld\n",a[n-1]-a[0],t);
    }
    else
        printf("%lld %lld\n",a[n-1]-a[0],x*y);
}
