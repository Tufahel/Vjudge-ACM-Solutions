#include<stdio.h>
#define ll long long
void mrge(ll arr[], ll l, ll m, ll r)
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
}
void mergeSort(ll arr[], ll l, ll r)
{
    ll cnt=0;
    if (l < r)
    {
        ll m = (l+r)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        mrge(arr, l, m, r);
    }
}

int main()
{
    ll n;
    while(scanf("%lld",&n))
    {
        if(n==0)
            return 0;
        ll arr[n+3];
        ll j;
        for(j=0; j<n; j++)
            scanf("%lld",&arr[j]);
        mergeSort(arr,0,n-1);
        printf("%lld",arr[0]);
        for(j=1; j<n; j++)
            printf(" %lld",arr[j]);
        printf("\n");
    }
}
