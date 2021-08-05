#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n,arr[2000];
    cin>>n;
    string st;
    char ch[2000],x;
    for(ll i=0; i<n; i++){
        ll c=0,d=0;
        for(ll j=0; ;j++){
            if(j%2==0){
                cin>>arr[c++];
                getchar();
            }
            else if(j%2==1){
                cin>>x;
                ch[d++]=x;
                if(x=='=')
                    break;
            }
        }
        ll sum=arr[0];
        for(ll i=1; i<c; i++){
            //cout<<arr[i]<<" ";
            if(ch[i-1]=='+')
                sum=sum+arr[i];
            else if(ch[i-1]=='-')
                sum=sum-arr[i];
            else if(ch[i-1]=='/')
                sum=sum/arr[i];
            else
                sum=sum*arr[i];
        }
        cout<<sum<<endl;
    }
}
