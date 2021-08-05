#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long arr[n+2];
    for(long long int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int flag=1;
    for(long long int i=1; i<=n-2; i++)
    {
        if(arr[i-1]+arr[i]>arr[i+1])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
