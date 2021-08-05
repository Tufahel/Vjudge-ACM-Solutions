#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    long long int i,j,p,sum=0;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>p;
        sum=0;
        for(j=1; j*j<=p; j++)
        {
            if(p%j==0)
            {
                if(p/j==j)
                    sum=sum+j;
                else
                {
                    sum=sum+j;
                    sum=sum+p/j;
                }
            }
        }
        cout<<sum<<endl;
    }

}

