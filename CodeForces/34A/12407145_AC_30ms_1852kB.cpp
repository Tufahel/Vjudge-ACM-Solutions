#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,p,q,k;
    cin>>n;
    int arr[n+1],num[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        num[i]=arr[i];
    }
    int minn=10001,x,y,sum;
    for(int i=0; i<=n-1; i++)
    {
        if(i==(n-1))
        {
            sum=abs(arr[n-1]-arr[0]);
            p=n-1;
            q=0;
        }
        else
        {
            sum=abs(arr[i]-arr[i+1]);
            p=i;
            q=i+1;
        }
        if(sum<minn)
        {
            minn=sum;
            //cout<<minn<<endl;
            x=p+1;
            y=q+1;
        }
    }
    cout<<x<<" "<<y<<endl;

}
