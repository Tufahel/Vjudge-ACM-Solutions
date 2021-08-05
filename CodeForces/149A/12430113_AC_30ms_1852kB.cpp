#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int arr[13];
    for(int i=0; i<12 ;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+12,greater<int>());
    if(t==0)
    {
        cout<<t<<endl;
        return 0;
    }
    int x=0;
    int sum=0;
    /*for(int i=0; i<12; i++)
    {
        cout<<arr[i]<<endl;
    }*/
    for(int i=0; i<12; i++)
    {
        sum=sum+arr[i];
        if(sum<t)
        {
            x++;
        }
        else
        {
            x++;
            cout<<x<<endl;
            break;
        }
    }
    if(sum<t)
        cout<<"-1"<<endl;
}
