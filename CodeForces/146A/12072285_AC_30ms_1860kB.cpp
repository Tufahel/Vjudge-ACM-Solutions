#include<bits/stdc++.h>
#define ll long long
#define s scanf
#define p printf

using namespace std;

int main()
{
    int n,i,k,l,flag=0,flag1=0,sum=0,sum1=0;
    cin>>n;
    string st;
    cin>>st;
    for(i=0; i<n; i++)
    {
        if(st[i]!=52 && st[i]!=55)
            flag=1;
        //cout<<st[i]<<endl;
    }
    for(i=0; i<n/2; i++)
    {
        sum=sum+st[i]-48;
    }
    //cout<<sum<<endl;
    for(i=n/2; i<n; i++)
    {
        sum1=sum1+st[i]-48;
    }
    //cout<<sum<<endl;
   // cout<<sum1<<endl;
    if(flag==0)
    {
        if(sum==sum1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;


}
