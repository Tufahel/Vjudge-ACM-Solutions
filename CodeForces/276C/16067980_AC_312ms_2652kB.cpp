#include<bits/stdc++.h>
using namespace std;
#define LL long long


int a[200100];
int val[200100];
int b[200100];
int main()
{
    int n,q;
    scanf("%d%d",&n,&q);
    for(LL i=0; i<n; i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(LL i=0; i<q; i++)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        l--;
        r--;
        val[l]++;
        if (r<n-1)
            val[r+1]--;
    }
    int v=0;
    for(LL i=0; i<n; i++)
    {
        v+=val[i];
        b[i]=v;
    }
    sort(b,b+n);
    LL res=0;
    for(LL i=0; i<n; i++)
        res+=(b[i]*1ll*a[i]);
    cout<<res<<endl;
    return 0;
}