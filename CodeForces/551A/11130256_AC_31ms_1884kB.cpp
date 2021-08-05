#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,sum=1,i,j;
    cin>>a;
    int arr[a];
    for(i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<a; i++)
    {
        if(arr[i]>arr[0])
            sum++;
    }
    cout<<sum<<endl;
    for(i=1; i<a; i++)
    {
        sum=1;
        for(j=0; j<a; j++)
        {
            if(arr[j]>arr[i])
                sum++;
        }
        cout<<sum<<endl;

    }
}
