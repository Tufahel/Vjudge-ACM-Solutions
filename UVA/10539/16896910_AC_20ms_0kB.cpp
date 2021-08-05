#include<bits/stdc++.h>
#define ll long long
#define sz 1000022
using namespace std;
ll prime[sz];
ll cnt=0;
//bitset<sz>bs;
ll bs[sz];
void sieve()
{
    ll i,j,sq=sqrt(sz);
    prime[cnt++]=2;
    //bs.set();
    for(i=4; i<=sz; i=i+2)
        bs[i]=1;
    for(i=3; i<=sz; i=i+2)
    {
        if(!bs[i])
        {
            prime[cnt++]=i;
            if(i<=sq){
            for(j=i*i; j<sz; j=j+(i*2))
                bs[j]=1;
            }
        }
    }
}

int main()
{
    sieve();
    ll n;
    //for(ll i=0; i<20; i++)
        //cout<<prime[i]<<" ";
    cin>>n;
    for(ll i=0; i<n; i++){
        ll x,y,j=0,rem,c=0;
        cin>>x>>y;
        ll sq=sqrt(y);
        while(prime[j]<=sq){
            rem=prime[j];
            while(rem<=y){
                rem=rem*prime[j];
                if(rem>=x && rem<=y)
                    c++;
            }
            j++;
        }
        cout<<c<<endl;
    }
}
