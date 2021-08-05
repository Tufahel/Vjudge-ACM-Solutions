#include<bits/stdc++.h>
#define ll long long
#define sc scanf
using namespace std;

int main()
{
    ll r,c;
    cin>>r>>c;
    char ch[r+2][c+2];
    for(ll i=0; i<r; i++)
        for(ll j=0; j<c; j++)
            cin>>ch[i][j];

    ll flag=0;
    for(ll i=0; i<r; i++)
    {
        for(ll j=0; j<c; j++)
        {
            if(ch[i][j]=='.')
            {
                ch[i][j]='D';
            }
            if((ch[i][j]=='W' && ch[i][j+1]=='S' && j!=c-1) || (ch[i][j]=='W' && ch[i][j-1]=='S' && j!=0) || (ch[i][j]=='W' && ch[i+1][j]=='S' && i!=r-1) || (ch[i][j]=='W' && ch[i-1][j]=='S'&& i!=0))
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;

    }
    if(flag==1)
    {
        cout<<"No"<<endl;
        return 0;
    }
    if(flag==0)
        cout<<"Yes"<<endl;
    for(ll i=0; i<r; i++)
    {
        for(ll j=0; j<c; j++)
        {
            cout<<ch[i][j];
        }
        cout<<endl;
    }

}
