#include<bits/stdc++.h>
#define ll long long
using namespace std;
void insertionSort(ll arr[],ll n)
{
    ll i,j,key;
    for(i=1; i<n; i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=key;
    }
}
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll arr[4]={a,b,c};
    insertionSort(arr,3);
    ll res=(arr[2]-arr[1])+(arr[1]-arr[0]);
    cout<<res<<endl;
    /*Second wrong answer of this programm was the solution of another
    programm that was submitted mistakenly :/ */
}
