#include<bits/stdc++.h>

using namespace std;

int main()
{

    int a,n,m,i,j,st=1,en=0;
    scanf("%d",&a);
    int arr[a];
    for(i=1; i<=a; i++)
    {
        cin>>arr[i];
    }
    sort(arr+1,arr+a+1);
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&m);
        int st=1,en=a,midl,num=0;
        while(st<=en)
        {
            midl=(st+en)/2;
            if(arr[midl]>m)
                en=midl-1;
            else
            {
                num=midl;
                st=midl+1;
            }
        }
        cout<<num<<endl;

    }
}
