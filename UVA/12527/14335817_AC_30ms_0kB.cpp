/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 1000001
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
bool isPrime[sz];
ll arr[sz1],num[sz1],temp[sz1];

void nrp()
{
    ll n;
    for(ll i=1; i<=sz1; i++){
        if(i<=10)
            arr[i]=1;
        num[i]=1;
    }
    for(ll i=11; i<=sz1; i++){
        n=i;
        ll y,x=0,flag=0;
        while(n>0){
            y=n%10;
            temp[x++]=y;
            n=n/10;
        }
        sort(temp,temp+x);
        for(ll j=0; j<x; j++){
            if(temp[j]==temp[j+1]){
                flag=1;
                num[i]=0;
                break;
            }
        }
        if(flag==1){
            arr[i]=arr[i-1];
            continue;
        }
        arr[i]=arr[i-1]+1;
    }
}
int main()
{
    nrp();
    ll m,n;
    while(sc("%lld %lld",&m,&n)!=EOF){
        ll sum=0;
        for(ll i=m; i<=n; i++){
            sum=sum+num[i];
            //cout<<num[i]<<endl;
        }
        //cout<<sum<<endl;
        pf("%lld\n",sum);
    }

    //cout<<43%100<<endl;
}
