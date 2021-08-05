#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,s=0,x=0,abst=0;
    cin>>n>>m;
    int arr[n+1],sum=0;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int nw[n];
    nw[0]=arr[0];
    //sort(arr, arr+n);
    for(i=1; i<n; i++)
    {
        if(arr[i]+arr[i-1]<m)
        {
            x++;
            if(x==1)
            {
                abst=m-arr[i-1];
            }
            else
            {
                abst=m-abst;
                if(abst<arr[i])
                    abst=arr[i];
            }
            nw[i]=abst;
        }
        else
        {
            nw[i]=arr[i];
            abst=nw[i];
        }
        //nw[i+1]=abst;

    }
    for(i=0; i<n; i++)
    {
        s=abs(arr[i]-nw[i])+s;
    }
    cout<<s<<endl;
    if(n==1)
        cout<<nw[0]<<endl;
    else
    {
        for(i=0; i<n; i++)
        {

            if(i<n-1)
                cout<<nw[i]<<" ";
            else if(i=n-1)
                cout<<nw[i]<<endl;
        }
    }


}