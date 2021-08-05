/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 1000002
#define sc scanf
#define pf printf
#define ll unsigned long long
#define Mx 1000000007
#define mod 1000003
//bool arr[sz1];
//ll arr[sz1];
//map<ll,ll>arr;
//bool isPrime[sz];
//bool divi[sz];
//const ll mod=1000003;
//num[sz1],num1[sz1];
int main()
{
    int m,n;
    cin>>n;
    int arr[n+1];
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int c=n;
    sort(arr, arr+n);
    int l=0;
    for(int i=n/2; i<=n-1; i++)
    {

        if(l>=n/2)
            break;
        int x=arr[i];
        int y=arr[l]*2;
        if(x>=y)
        {
            c--;
            l++;
            //cout<<arr[i]<<" "<<arr[l];
        }
        //cout<<endl;
    }
    cout<<c<<endl;

}