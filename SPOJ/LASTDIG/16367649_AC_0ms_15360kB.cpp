#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[20]={6,2,4,8,1,3,9,7,6,4,1,7,9,3,6,8,4,2,1,9}, n; long long a,b,mod,dif;
    cin>>n;
    for(int i=0; i<n; i++){ cin>>a>>b;
        mod=a%10;
        if(a==0){ cout<<0<<endl; continue;} if(b==1 && mod!=0){ cout<<a<<endl; continue;}
        if(b==0){ cout<<1<<endl; continue;} if(mod==1 || mod==0 || mod==5 ||mod==6) cout<<mod<<endl;
        else if(mod==2) cout<<arr[b%4]<<endl; else if(mod==3) cout<<arr[(b%4)+4]<<endl;
        else if(mod==4) cout<<arr[(b%2)+8]<<endl; else if(mod==7) cout<<arr[(b%4)+10]<<endl;
        else if(mod==8) cout<<arr[(b%4)+14]<<endl; else if(mod==9) cout<<arr[(b%2)+18]<<endl;}
}
