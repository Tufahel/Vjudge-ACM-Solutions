#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll k=powl(n,2);
    ll arr[k+1];
    arr[0]=1;
    ll p=n;
    for(ll i=1; i<k; i++)
        arr[i]=arr[i-1]+1;
    ll t=0;
    for(ll i=0; i<k; i++)
    {
        if(n==p/2){
            cout<<endl;
            n=p;
            t++;
            if(t==p)
                break;
        }
        n--;
        cout<<arr[i]<<" "<<arr[k-1-i]<<" ";
    }
}
