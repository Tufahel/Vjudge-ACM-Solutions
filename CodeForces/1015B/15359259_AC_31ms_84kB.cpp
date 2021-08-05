
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
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;
int main()
{
    ll n,f,c=0;
    cin>>n;
    string st,st1;
    cin>>st>>st1;
    ll arr[10000];
    ll p;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<n; j++)
        {
            f=0;
            if(st1[i]==st[j] && i!=j)
            {
                for(ll k=j; k>=i; k--)
                {
                    swap(st[k],st[k-1]);
                    //cout<<st[k]<<" "<<st[k-1]<<endl;
                    //cout<<st<<endl;
                    //cout<<k<<endl;
                    arr[c++]=k;
                    if(st1[i]==st[i])
                    {
                        f=1;
                        break;
                    }
                }
                //cout<<endl;
            }

            if(f==1 || st==st1)
                break;

        }
        if(st==st1)
            break;
    }
    if(st1!=st){
        cout<<-1<<endl;
        return 0;
    }
    cout<<c<<endl;
    for(ll i=0; i<c; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

}
