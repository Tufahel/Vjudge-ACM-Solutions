#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n,m,flag=0;
    int arr[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int l=sizeof(arr)/sizeof(arr[0]);
    scanf("%d%d",&n,&m);
    //printf("%d\n",n);
    int num[l+1];
    for(i=0; i<l+1; i++)
    {
        num[i]=arr[i];
    }
    for(i=0; i<l; i++)
    {
        if(n==num[i])
        {
             if(m==num[i+1])
             {
                 flag=1;
                 break;
             }
             else if(m!=num[i+1])
             {
                 flag=0;
                 break;
             }
        }
    }
    if(flag==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

}
