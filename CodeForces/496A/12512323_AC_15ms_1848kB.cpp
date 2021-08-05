#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m;
    cin>>m;
    int arr[m];
    for(int i=0; i<m; i++)
    {
        cin>>arr[i];
    }
    int k=1,p,maxx=0,minn=10020;
    for(int i=1; i<m-1; i++)
    {
        maxx=0;
        for(int j=0; j<m-1; j++)
        {
            if(j==k)
            {
                p=arr[j+1]-arr[j-1];
                if(p>maxx)
                    maxx=p;
                //cout<<arr[j+1]<<" "<<arr[j-1]<<endl;
            }
            else if((j+1)!=k)
            {
                p=arr[j+1]-arr[j];
                if(p>maxx)
                    maxx=p;
                //cout<<arr[j+1]<<" "<<arr[j]<<endl;
            }
            //cout<<maxx<<endl;
        }
        //cout<<endl;
        if(k<m-1)
            k++;
        if(maxx<minn)
            minn=maxx;
        //cout<<minn<<endl;
        //cout<<endl;
        if(k==m-2)
            break;

    }
    cout<<minn<<endl;
}
