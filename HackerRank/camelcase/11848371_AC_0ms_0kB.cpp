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
        if(i!=0 && st[i]>=65 && st[i]<=90)
        x++;
    }
    cout<<x<<endl;
}