#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int arr[n+2];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int c=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n-i-1; j++)
            {
                if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                    c++;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<c<<endl;
    }
}
