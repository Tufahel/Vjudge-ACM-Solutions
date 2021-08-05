#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100003
#define sc scanf
#define pf printf
#define ll long long int
#define Mx 1000000007
#define PI 2*acos(0)
//bool isPrime[sz];
int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        ll f=0;
        if(f==0)
        {
            f=1;
            cout<<"Original number was "<<n<<endl;
        }

        //for(ll i=0; i<c; i++)
        //cout<<arr[i]<<" "<<endl;
        map<ll,ll>mp;
        ll dif,cnt=0;
        while(1)
        {
            ll p,x=n,c=0,arr[20];
            while(x)
            {
                p=x%10;
                arr[c++]=p;
                x=x/10;
            }
            sort(arr,arr+c);
            ll sum=0,sum1=0;
            for(ll i=0; i<c; i++)
            {
                sum=sum+(arr[i]*powl(10,c-1-i));
            }
            for(ll i=c-1; i>=0; i--)
            {
                sum1=sum1+(arr[i]*powl(10,i));
            }
            dif=sum1-sum;
            n=dif;
            cnt++;
            cout<<sum1<<" - "<<sum<<" = "<<dif<<endl;
            if(mp[dif]){
                break;
            }
            mp[dif]=1;
        }
        cout<<"Chain length "<<cnt<<endl;
        cout<<endl;

    }

}
