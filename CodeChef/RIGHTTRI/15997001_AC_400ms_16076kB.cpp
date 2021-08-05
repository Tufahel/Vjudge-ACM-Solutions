#include<bits/stdc++.h>
using namespace std;
#define sz 18402
#define sz1 100003
#define sc scanf
#define pf printf
#define ll long long int
#define Mx 1000000007
#define PI 2*acos(0)
//bool isPrime[sz];
int main()
{
    ll t;
    cin>>t;
    for(ll i=0; i<t; i++){
        double h,area;
        cin>>h>>area;
        double theta=asin((4*area)/(h*h))/2;
        double a=h*sin(theta);
        double b=h*cos(theta);
        if(4*area>h*h){
            cout<<"-1"<<endl;
            continue;
        }
        double arr[5];
        arr[0]=a,arr[1]=b,arr[2]=h;
        sort(arr,arr+3);
        cout<<fixed<<setprecision(6)<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    }
}
