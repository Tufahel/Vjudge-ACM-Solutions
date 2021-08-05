#include<bits/stdc++.h>
#define ll long
using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
        if(n==0)
            return 0;
        int arr[n+3][n+3];
        int sum=0,c=0,x=0,y=0,cnt1=0,cnt2=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>arr[i][j];
                sum=sum+arr[i][j];
            }
            if(sum%2==1){
                cnt1++;
                x=i+1;
            }
            sum=0;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                //cout<<arr[j][i]<<" ";
                sum=sum+arr[j][i];
            }
            if(sum%2==1){
                cnt2++;
                y=i+1;
            }
            sum=0;
            //cout<<endl;
        }
        if(cnt1==1 || cnt2==1)
            cout<<"Change bit ("<<x<<","<<y<<")"<<endl;
        else if(cnt1==0 && cnt2==0)
            cout<<"OK"<<endl;
        else
            cout<<"Corrupt"<<endl;
    }
}
