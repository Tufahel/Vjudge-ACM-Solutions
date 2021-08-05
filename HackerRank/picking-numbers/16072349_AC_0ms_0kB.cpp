#include<bits/stdc++.h>

using namespace std;
int arr[200];
int main()
{
    int n,x;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        arr[x]++;
    }
    int mx=0;
    for(int i=0; i<=100; i++){
        mx=max(mx,arr[i]+arr[i+1]);
    }
    cout<<mx<<endl;
}
