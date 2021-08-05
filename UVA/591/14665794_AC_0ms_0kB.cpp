/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 11111111
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
//bool isPrime[sz];
//ll arr[100002];
//ll num[4000];
//string st;
//double con=10000;
int main()
{
    ll n,cnt=0;
    while(cin>>n)
    {
        cnt++;
        if(n==0)
            break;
        ll arr[n+1],sum=0,c=0;
        for(ll i=0; i<n; i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        ll div=sum/n;
        cout<<"Set #"<<cnt<<endl;
        if(sum%n==0)
        {
            for(ll i=0; i<n; i++)
            {
                c+=abs(arr[i]-div);
            }
            cout<<"The minimum number of moves is "<<c/2<<"."<<endl;
        }
        cout<<endl;

    }
}
