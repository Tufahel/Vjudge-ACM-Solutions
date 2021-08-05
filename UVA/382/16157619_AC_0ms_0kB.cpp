#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    printf("PERFECTION OUTPUT\n");
    while(1)
    {
        scanf("%d",&n);
        if(n==0){
            printf("END OF OUTPUT\n");
            break;
        }
        int sq=sqrt(n);
        int c=0,arr[n];
        for(int i=1; i<=sq; i++)
        {
            if(n%i==0)
            {
                if(n/i==i)
                    arr[c++]=i;
                else
                {
                    arr[c++]=i;
                    arr[c++]=n/i;
                }
            }
        }
        sort(arr,arr+c);
        int sum=0;
        /*for(int i=0; i<c; i++)
            cout<<arr[i]<<endl;*/
        for(int i=0;  ; i++)
        {
            if(arr[i]>(n/2))
                break;
            else
                sum+=arr[i];
        }
        if(sum<n)
            printf("%5d  DEFICIENT\n",n);
        else if(sum>n)
            printf("%5d  ABUNDANT\n",n);
        else if(sum==n)
            printf("%5d  PERFECT\n",n);
    }
    return 0;

}
