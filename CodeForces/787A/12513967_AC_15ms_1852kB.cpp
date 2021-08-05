#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d,i,j,sum,sum1;
    cin>>a>>b>>c>>d;
    for(i=0; i<100; i++)
    {
        sum=b+(i*a);
        for(j=0; j<100; j++)
        {
            sum1=d+(j*c);
            if(sum==sum1)
                break;
        }
        if(sum==sum1)
            break;
    }
    /*if(sum>100)
    {
        cout<<"-1"<<endl;
        return 0;
    }*/
    //cout<<i<<" "<<j<<endl;
    if(sum==sum1)
        cout<<sum<<endl;
    else
        cout<<"-1"<<endl;
}
