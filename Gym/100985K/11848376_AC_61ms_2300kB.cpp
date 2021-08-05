#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    int x=1;
    int n=st.length();
    for(int i=0; i<n; i++)
    {
        if(st[i]==st[i+1])
        x++;
        else
        {
            cout<<st[i];
            printf("%d",x);
            x=1;
        }
    }
}