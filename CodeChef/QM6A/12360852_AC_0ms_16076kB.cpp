#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    long long k,sum;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        sum=0;
        for(int j=n; j>0; j--)
        {
            k=powl(j,2);
            sum=sum+k;

        }
        k=powl(n,2);
        sum=sum*2-k;
        cout<<sum<<endl;
    }
}
