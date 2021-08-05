#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j;
    while(scanf("%d",&n))
    {
        int res;
        if(n==0)
            break;
        res= (n*(n+1)*((2*n)+1))/6;
        printf("%d\n",res);

    }
}
