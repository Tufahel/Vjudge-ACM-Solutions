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
int num[10007];
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

void divisors()
{
    int arr[10004],cnt=0;
    for(int i=30; i<=12000; i++){
            int sq=sqrt(i),c=0;
            for(int j=2; j<=sq; j++){
                if(i%j==0){
                    if(i/j==j)
                        arr[c++]=j;
                    else{
                        arr[c++]=j;
                        arr[c++]=i/j;
                    }
                }
            }
            int d=0;
            for(int j=0; j<c; j++){
                if(bs[arr[j]] ){
                    d++;
                }
            }
            if(d>=3){
                num[cnt++]=i;
            }
    }
}
int main()
{
     sieve();
     divisors();
     int n,x;
     cin>>n;
     for(int i=0; i<n; i++){
        cin>>x;
        cout<<num[x-1]<<endl;
     }
}
