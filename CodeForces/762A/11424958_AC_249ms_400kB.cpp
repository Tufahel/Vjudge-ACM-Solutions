#include<bits/stdc++.h>

using namespace std;

long long b[50000];

int main()
{
    long long int a,n,i,x=0;
    scanf("%lld %lld",&a,&n);
    //long long b[a];
    for(i=1; i*i<=a; i++)
    {
        if(a%i==0)
        {
            if(a/i==i)
            {
                x++;
                b[x]=i;
            }
                //cout<<i<<endl;
            else
            {
                x++;
                b[x]=i;
                x++;
                b[x]=a/i;
            }
                //cout<<i<<" "<<a/i<<" "<<endl;
        }
    }
    sort(b+1,b+x+1);
    /*for(i=1; i<=a; i++)
    {
        if(a%i==0)
        {
            x++;
            b[x]=i;
        }
    }*/
    if(x<n)
        printf("-1\n");
    else
        printf("%lld\n",b[n]);

}
