#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,j,k,t,a,b,c,x,cnt,ttp,sum,sum1,nsum;
    int arr[100000],arr1[100000];
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        x=0;

        scanf("%lld%lld%lld",&a,&b,&c);
        for(j=a; j<=b; j++)
        {
            cnt=0;
            if(j%c==0)
            {
                nsum=0;
                for(k=1; k<=sqrt(j); k++)
                {
                    if(j%k==0)
                    {
                        cnt++;
                        if(j/k==k)
                            nsum=nsum+k;
                        else
                            nsum=nsum+k+j/k;
                    }

                }
                ttp=sqrt(j);
                if(ttp==sqrt(j))
                    cnt=cnt*2-1;
                else
                    cnt=cnt*2;
                arr[x]=cnt;
                arr1[x]=nsum;
                x++;
            }
        }
        sum=0;
        sum1=0;
        for(k=0; k<x; k++)
        {
            sum=sum+arr[k];
            sum1=sum1+arr1[k];
            //printf("%d\t",arr1[k]);
        }
        printf("%lld %lld\n",sum,sum1);
    }
}
