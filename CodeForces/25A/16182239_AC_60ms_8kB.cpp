#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,odd=0,even=0,p,q;
    cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n; i++){
        if(arr[i]%2==1){
            odd++;
            p=i+1;
        }
        else{
            even++;
            q=i+1;
        }
    }
    if(odd<=even)
        cout<<p<<endl;
    else
        cout<<q<<endl;
}
