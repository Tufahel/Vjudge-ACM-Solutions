#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr+1,arr+n+1);
    int a,x;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&x);
        int start=1, stop=n,mid,num=0;
        while(start<=stop)
        {
            mid=(start+stop)/2;
            if(arr[mid]>x)
                stop=mid-1;
            else
            {
                num=mid;
                start=mid+1;
            }
        }
        printf("%d\n",num);
    }
}
