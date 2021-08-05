#include<bits/stdc++.h>

using namespace std;

struct name
{
    long long int a,b;
};
bool cmp(name x, name y)
{
    if(x.b>y.b)
        return true;
    else if(x.b==y.b && x.a<y.b)
        return true;
    else
        return false;
}

int main()
{
    long long int n,c=0,i;
    scanf("%lld",&n);
    struct name x[n];
    for(i=0; i<n; i++)
    {
        cin>>x[i].a>>x[i].b;
    }
    sort(x, x+n, cmp);
    for(i=0; i<n-1; i++)
    {
        if(x[i].a < x[i+1].a && x[i].b > x[i+1].b)
            c++;
    }
    if(c>0)
        printf("Happy Alex\n");
    else
        printf("Poor Alex\n");
}
