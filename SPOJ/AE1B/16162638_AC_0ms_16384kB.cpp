#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,s;
    cin>>n>>k>>s;
    int total=k*s;
    int sum=0,c=0,arr[n+3];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=n-1; i>=0; i--){
        sum=sum+arr[i];
        if(sum<total)
            c++;
        else{
            c++;
            break;
        }
    }
    cout<<c<<endl;
}
