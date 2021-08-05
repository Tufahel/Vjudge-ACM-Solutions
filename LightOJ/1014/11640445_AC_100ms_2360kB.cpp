#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[100000],i,j,k,l,m,n,test,p,x;
    cin>>test;
    for(x=1;x<=test;x++)
    {
        k=0;
        cin>>p>>l;
        cout<<"Case "<<x<<":";
        if((p-l)<=l)
            cout<<" impossible"<<endl;
        else
        {
            for(i=1;i<=sqrt(p-l);i++)
            {
                if((p-l)%i==0)
                {
                    if((p-l)%i==0)
                    {
                        a[k++]=i;
                    }
                    if(((p-l)/i) != i)
                    {
                        a[k++]=(p-l)/i;
                    }
                }
            }
            sort(a,a+k);
            for(int m=0;m<k;m++)

            {
                if(a[m]>l)
                cout<<" "<<a[m];
            }

            cout<<endl;

        }
    }
}
