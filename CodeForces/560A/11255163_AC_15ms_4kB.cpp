#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,a,flag=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0; i<n; i++)
    {
        if(arr[0]==1)
        {
            printf("-1\n");
            break;
        }
        else if(arr[0]!=1)
        {
            printf("1\n");
            break;
        }
    }
}