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

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int arr[n+1];
        for(ll j=0; j<n; j++){
            cin>>arr[j];
        }
        int c=0;
        for(ll j=0; j<n-1; j++){
            for(ll k=0; k<n-j-1; k++){
                if(arr[k]>arr[k+1]){
                    swap(arr[k],arr[k+1]);
                    c++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;

    }
}
