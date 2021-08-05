#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a;
    scanf("%lld",&a);
    if(a%6==1 || a%6==3 || a%6==0)
        printf("yes\n");
    else
        printf("no\n");
}