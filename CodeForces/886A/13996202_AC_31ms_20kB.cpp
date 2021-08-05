#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    float arr[7];
    float sum=0;
    for(ll i=0; i<6; i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    sum=sum/2;
    for(ll i=0; i<6; i++){
        for(ll j=i+1; j<6; j++){
            for(ll k=j+1; k<6; k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;
}