#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<int,int>mp;
void notCubeFree()
{
    int c,x;
    for(int i=2; i<=100; i++)
    {
        x=i*i*i;
        for(int j=x; j<=1000000; j+=x)
            mp[j]=-1;
    }
}

void precalculation()
{
    int c=1;
    for(int i=1; i<=1000000; i++){
        if(mp[i]==0)
            mp[i]=c++;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    notCubeFree();
    precalculation();
    int t,n,cube;
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        cin>>n;
        if(mp[n]!=-1)
        {
            cout<<"Case "<<i<<": "<<mp[n]<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": Not Cube Free"<<endl;
        }
    }
}
