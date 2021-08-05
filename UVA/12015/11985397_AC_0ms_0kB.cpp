#include<bits/stdc++.h>

using namespace std;

struct ab
{
    string st;
};

int main()
{
    int t,i,j,arr[15],maxx;
    struct ab num[12];
    cin>>t;
    for(i=1; i<=t; i++)
    {
        for(j=0; j<10; j++)
        {
            cin>>num[j].st>>arr[j];
        }
        maxx=arr[0];
        for(j=1; j<10; j++)
        {
            if(maxx<arr[j])
                maxx=arr[j];
        }
        //printf("Case #%d:\n",i) ;
        cout<<"Case #"<<i<<":"<<endl;
        for(j=0; j<10; j++)
        {
            if(maxx==arr[j])
                cout<<num[j].st<<endl;
        }
    }
}