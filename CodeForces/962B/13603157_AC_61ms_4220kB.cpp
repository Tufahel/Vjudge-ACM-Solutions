#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,a,b;
    cin>>x>>a>>b;
    string st;
    cin>>st;
    for(int i=0; i<x; i++)
    {

        if(st[i]=='.')
        {
            if(i==0)
            {
                if(a>=b && a>0)
                {
                    st[i]='A';
                    a--;
                }
                else if(b>0)
                {
                    st[i]='B';
                    b--;
                }
            }
            else
            {
                if(a>=b&& a>0)
                {
                    if(st[i-1]!='A')
                    {
                        st[i]='A';
                        a--;
                    }
                    else if(b>0)
                    {
                        st[i]='B';
                        b--;
                    }
                }
                else if(b>0)
                {
                    if(st[i-1]!='B')
                    {
                        st[i]='B';
                        b--;
                    }
                    else if(a>0)
                    {
                        st[i]='A';
                        a--;
                    }
                }

            }
        }
    }
    int c=0;
    for(int i=0; i<x; i++)
    {
        if(st[i]=='A' || st[i]=='B')
            c++;
        //cout<<st[i]<<endl;
    }
    cout<<c<<endl;
}
