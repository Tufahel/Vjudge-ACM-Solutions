#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,sum=0,c=0;
    cin>>n;
    int arr[n+3];
    int num[6]= {0};
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        num[arr[i]]++;
    }
    sort(arr,arr+n);
    reverse(arr,arr+n);
    int f;
    if(num[1] && num[3])
    {
        for(int i=0; i<n; i++)
        {
            if(num[1]==0 || num[3]==0)
                break;
            if(arr[i]==3){
                num[1]--;
                num[3]--;
                num[4]++;
            }
        }
    }
    if(num[1] && num[2]){
        for(int i=0; i<n; i++){
            if(num[1]==0 || num[2]==0)
                break;
            if(num[1]==1 && arr[i]==2){
                num[1]--;
                num[2]--;
                num[3]++;
            }
            if(num[1]>1 && arr[i]==2){
                num[1]-=2;
                num[2]--;
                num[4]++;
            }
        }
    }
    if(num[2]%2==1)
        num[2]=(num[2]/2)+1;
    else
        num[2]=num[2]/2;
    if(num[1]%4!=0)
        num[1]=(num[1]/4)+1;
    else
        num[1]=num[1]/4;
    cout<<num[1]+num[2]+num[3]+num[4]<<endl;
}
