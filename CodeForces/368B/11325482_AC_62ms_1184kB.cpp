#include<bits/stdc++.h>

using namespace std;
int arr[100010],num[100010],ans[100010];
int main()
{
    int i,j,k,m,n,ct=0,c=0;
    scanf("%d%d",&n,&m);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    /*for(i=1; i<m; i++)
    {
        scanf("%d",&num[i]);
    }*/
    for(i=n; i>=1; i--)
    {
        k=arr[i];
        if(!num[k])
        {
            num[k]=1;
            ct++;
        }
        ans[i]=ct;
    }
    while(m--)
    {
        scanf("%d",&k);
        printf("%d\n",ans[k]);
    }
}
