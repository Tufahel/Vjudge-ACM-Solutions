#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    string st;
    for(int j=0; j<t; j++)
    {
        cin>>st;
        int flag=0;
        int len=st.length()-1;
        for(int i=0; i<=len/2; i++)
        {
            if(st[i]!=st[len-i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"no"<<endl;
        else
        {
            for(int i=0; i<=len; i++)
            {
                if(st[i]!='A' && st[i]!='H' && st[i]!='I' && st[i]!='M' && st[i]!='O' && st[i]!='T' && st[i]!='U' && st[i]!='V' && st[i]!='W' && st[i]!='X' && st[i]!='Y')
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                cout<<"no"<<endl;
            else
                cout<<"yes"<<endl;
        }

    }
}

