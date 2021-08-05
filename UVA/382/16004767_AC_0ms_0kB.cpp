#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>n)
    {
        ll c=0;
        if(n==0){
            break;
        }
        for(ll i=1; i<=n/2; i++)
        {
            if(n%i==0)
                c=c+i;
        }
        if(c<n)
            printf("%5lld  DEFICIENT\n",n);
        //cout<<fixed<<setprecision(5)<<n<<" DEFICIENT"<<endl;
        else if(c==n)
            printf("%5lld  PERFECT\n",n);
        //cout<<fixed<<setprecision(5)<<n<<" PERFECT"<<endl;
        else if(c>n)
            printf("%5lld  ABUNDANT\n",n);
        //cout<<fixed<<setprecision(5)<<n<<" ABUNDANT"<<endl;
    }
    cout<<"END OF OUTPUT"<<endl;

}

