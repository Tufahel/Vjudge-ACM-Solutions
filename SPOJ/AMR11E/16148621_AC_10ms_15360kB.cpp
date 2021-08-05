#include<bits/stdc++.h>
using namespace std;
#define sz 100007
#define sz1 10007
#define sc scanf
#define pf printf
#define ll long long int
#define Mx 9999
#define PI 2*acos(0)
//bool isPrime[sz];
//bool cmp(pair<ll,ll>a, pair<ll,ll>b)
ll arr[10007];
bitset<sz>bs;
void sieve()
{
    int i,j;
    bs.set();
    for(i=4; i<sz; i=i+2)
        bs[i]=0;
    for(i=3; i*i<sz; i=i+2)
    {
        if(bs[i])
        {
            for(j=i*i; j<sz; j=j+(i*2))
                bs[j]=0;
        }
    }
}
void PrimeFact()
{
    ll cnt=1,c,sq,num[1007],c1;
    for(ll i=25; i<=10000; i++)
    {
        sq=sqrt(i);
        c=0,c1=0;
        for(ll j=2; j<=sq; j++)
        {
            if(i%j==0)
            {
                if(i/j==j)
                    num[c++]=j;
                else
                {
                    num[c++]=j;
                    num[c++]=i/j;
                }
            }
        }
        for(ll j=0; j<c; j++)
        {
            if(bs[num[j]]){
                c1++;
            }
        }
        if(c1>=3)
            arr[cnt++]=i;
        //cout<<i<<" "<<c1<<endl;
    }
}


int main()
{

    sieve();
    PrimeFact();
    ll n,x;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        cout<<arr[x]<<endl;
    }
}

