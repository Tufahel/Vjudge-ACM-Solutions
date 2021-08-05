#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,c=0;
    while(cin>>n){
        c++;
        int arr[n+3];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        //sort(arr,arr+n);
        ll prod=1,mx=0;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                prod=1;
                for(int k=i; k<=j; k++){
                    prod=arr[k]*prod;
                    mx=max(mx,prod);
                }
            }
        }
        cout<<"Case #"<<c<<": The maximum product is "<<mx<<".\n"<<endl;
    }
}
//4 -2 0 -2 0 5 -2 0 -3 -1 -45 5 -2 -10 -3 -1 -45 8 -2 -10 0 -3 -1 -45 0 999 9 -2 1 30 3 -1 45 20 -9 4
