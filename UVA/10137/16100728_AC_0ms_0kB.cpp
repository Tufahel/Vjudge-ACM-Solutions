#include<bits/stdc++.h>
#define ll long long
#define sz 100000
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    double x;
    while(1){
        cin>>n;
        if(n==0)
            return 0;
        double arr[n+2],sum=0;
        for(ll i=0; i<n; i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        double avg=sum/n*1.0;
        double pos=0,neg=0,ans;
        sort(arr,arr+n);
        for(ll i=0; i<n; i++){
            if(arr[i]<=avg)
                neg+= long ((avg-arr[i])*100.0)/100.0;
            else
                pos+= long ((arr[i]-avg)*100.0)/100.0;
        }
        if(pos>neg)
            cout<<fixed<<setprecision(2)<<"$"<<pos<<endl;
        else
            cout<<fixed<<setprecision(2)<<"$"<<neg<<endl;

    }

}
