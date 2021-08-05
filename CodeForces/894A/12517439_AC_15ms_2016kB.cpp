#include<bits/stdc++.h>

using namespace std;

int main()
{
    string st;
    cin>>st;
    int k=st.length();
    int c=0;
    for(int i=0; i<k; i++)
    {
        if(st[i]=='Q')
        {
            for(int j=i+1; j<k; j++)
            {
                if(st[j]=='A')
                {
                    for(int l=j+1; l<k; l++)
                    {
                        if(st[l]=='Q')
                            c++;
                    }
                }
            }
        }
    }
    cout<<c<<endl;
}
