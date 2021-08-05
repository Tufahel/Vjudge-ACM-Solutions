#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string st;
    cin>>st;
    int d=0, a=0;
    set<char>s;
    for(int i=0; i<n; i++)
    {
        if(st[i]>=65 && st[i]<=90)
            st[i]=st[i]+32;
        s.insert(st[i]);
    }
    int c=s.size();
    if(c==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}