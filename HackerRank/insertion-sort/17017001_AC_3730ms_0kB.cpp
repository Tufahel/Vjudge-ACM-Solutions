#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mrge(ll arr[], ll l, ll m, ll r)
{
    ll i, j, k;
    ll n1 = m - l + 1;
    ll n2 =  r - m;
    ll cnt=0;
    ll L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
            cnt+=n1-i;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
    return cnt;
}
ll mergeSort(ll arr[], ll l, ll r)
{
    ll cnt=0;
    if (l < r)
    {
        ll m = (l+r)/2;
        cnt=cnt+mergeSort(arr, l, m);
        cnt=cnt+mergeSort(arr, m+1, r);
        cnt=cnt+mrge(arr, l, m, r);
    }
    return cnt;
}
int main()
{
    ll t;
    cin>>t;
    //Using insertion sort, we should get TLE.
    //So, we should use merge Sort --> Tufahel
    for(ll i=0; i<t; i++){
        ll n;
        cin>>n;
        ll arr[n+2];
        for(ll j=0; j<n; j++)
            cin>>arr[j];
        ll ans=mergeSort(arr, 0, n-1);
        cout<<ans<<endl;
    }
}
