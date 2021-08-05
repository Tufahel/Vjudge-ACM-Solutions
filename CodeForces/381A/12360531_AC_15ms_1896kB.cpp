#include<bits/stdc++.h>

using namespace std;

int arr[10010];
int main()
{
    int n;
    cin>>n;
    int num[2]={0};
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //sort(arr,arr+n);
    int sum=0,sum1=0,p=0,c=n-1;
    for(int i=0; i<n; i++)
    {
        //sum=sum+arr[i-1];
        //if(i>=0)
        //sum1=sum1+arr[i-2];
        if(arr[p]<arr[c])
        {
            num[i%2]+=arr[c--];
            //printf("%d %d\n %d\n\n",arr[p],arr[c+1],num[i%2]);
        }
        else
        {
            num[i%2]+=arr[p++];
            //printf("%d %d\n %d\n\n",arr[p-1],arr[c],num[i%2]);
        }

    }
    printf("%d %d\n",num[0],num[1]);
}
