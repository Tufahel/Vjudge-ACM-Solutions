#include<bits/stdc++.h>
#define sz 6000008
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        double arr[n+2],averg=0,up,prcent;
        int c=0;
        for(int j=0; j<n; j++){
            cin>>arr[j];
            averg+=arr[j];
        }
        averg=averg/(n*1.0);
        for(int j=0; j<n; j++){
            if(arr[j]>averg)
                c++;
        }
        prcent=(c*100.0)/(n*1.0);
        cout<<fixed<<setprecision(3)<<prcent<<"%"<<endl;

    }
}
