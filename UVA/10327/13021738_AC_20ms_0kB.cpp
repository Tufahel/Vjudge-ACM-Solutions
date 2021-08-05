#include<stdio.h>
#define ll long long

void swp(ll *a, ll *b)
{
    ll temp=*a;
    *a=*b;
    *b=temp;
}

ll bubbleSort(ll a[],ll capacity,ll cnt)
{
    ll i,j;
    cnt=0;
    for(i=0; i<capacity-1; i++)
        for(j=0; j<capacity-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                cnt++;
                swp(&a[j],&a[j+1]);
            }

        }
    return cnt;

}

int main()
{
    ll n,i;
    while(scanf("%lld",&n)!=EOF)
    {
        ll data[100000];
        for(i=0; i<n; i++)
        {
            scanf("%lld",&data[i]);
        }
        ll cnt;
        ll k=bubbleSort(data,n,cnt);
        printf("Minimum exchange operations : %lld\n",k);
    }


}
