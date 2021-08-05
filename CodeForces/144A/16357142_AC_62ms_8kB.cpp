#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,mx=0,mn=1000,x,y;
    cin>>n;
    int arr[n+3];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>mx){
            mx=arr[i];
            x=i;
            //cout<<x<<" mx "<<mx<<endl;
        }
        if(arr[i]<=mn){
            mn=arr[i];
            y=i;
            //cout<<y<<" mn "<<mn<<endl;
        }
    }
    int c=0;
    for(int i=y; i<n-1; i++){
        if(arr[i]<arr[i+1]){
            swap(arr[i],arr[i+1]);
        c++;
        }
    }
    //cout<<c<<endl;
    for(int i=x; i>=1; i--){
        if(arr[i]>arr[i-1]){
            swap(arr[i],arr[i-1]);
            c++;
        }
    }
    //for(int i=0; i<n; i++)
      //  cout<<arr[i]<<" ";
    //cout<<endl;
    cout<<c<<endl;
}
