#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num,rem,num1,rem1,i,j,k,sum,t;
    int arr[100],arr1[100],arr2[100],arr3[100];
    scanf("%d",&t);
    for(k=0; k<t; k++)
    {
        scanf("%d%d",&num,&num1);
        int x=0;
        while(num>0)
        {
            rem = num %10;
            num = num / 10;
            arr[x]=rem;
            arr2[x]=rem;
            x++;
        }
        int y=0;
        while(num1>0)
        {
            rem1 = num1 %10;
            num1 = num1 / 10;
            arr1[y]=rem1;
            arr3[y]=rem1;
            y++;
        }
        sort(arr,arr+x,greater<int>());
        sort(arr1,arr1+y,greater<int>());
        int mult,n,res=0;
        for(i=0; i<x; i++)
        {
            n=arr[0]+1;
            mult=arr2[i]*powl(n,i);
            res=res+mult;
        }
        int mult1,m,res1=0;
        for(i=0; i<y; i++)
        {
            m=arr1[0]+1;
            mult1=arr3[i]*powl(m,i);
            res1=res1+mult1;
        }
        printf("%d\n",res+res1);
    }

}
