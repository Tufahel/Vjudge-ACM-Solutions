#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin>>st;
    int n=st.size(),c=0,p=0;
    for(int i=0; i<n; i++)
    {
        //cout<<c<<endl;
        if(st[i]=='.')
        {
            //cout<<c<<endl;
            if(c==1)
            {
                cout<<1;
                c=0;
                continue;
            }
            if(c==2)
            {
                cout<<2;
                c=0;
                continue;
            }
            //c=0;
            cout<<0;
        }
        else if(st[i]=='-')
        {
            c++;
            if(c==2)
            {
                cout<<2;
                c=0;
            }
        }

    }
    cout<<endl;
}
