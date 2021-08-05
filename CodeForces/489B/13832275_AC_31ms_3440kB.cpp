#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<string,ll>mp;
int main()
{
    ll n,m,x,y;
    cin>>n;
    ll arr[n+1];
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
        //num[i]=x;
    }
    cin>>m;
    ll num[m+1];
    for(ll i=0; i<m; i++)
    {
        cin>>num[i];
        //num[i]=x;
    }
    ll dif,c=0;
    //sort(arr,arr+n);
    sort(arr,arr+n);
    sort(num,num+m);
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++){
            if(num[j]==-1000)
                continue;
            dif=abs(arr[i]-num[j]);
            if(dif<=1)
            {
                c++;
                num[j]=-1000;
                break;
            }
        }
    }
    cout<<c<<endl;


    //cout<<sum<<" "<<y<<endl;
}
