/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 10002
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007

int main()
{
   ll n,k,div,pos,mx=0;
   cin>>n>>k;
   ll arr[n+1];
   for(ll i=0; i<n; i++){
        cin>>arr[i];
        div=arr[i]/k;
        if((arr[i]%k)>0)
            div++;
        if(div>=mx)
            mx=div, pos=i+1;
   }
   cout<<pos<<endl;
}
