#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    long long int arr[n],sum=0;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    if(sum%2==0)
        cout<<sum<<endl;

    else
    {
        for(i=0; i<n; i++)
        {
            if(arr[i]%2==1)
            {
                sum=sum-arr[i];
                break;
            }
        }
        cout<<sum<<endl;
    }

}