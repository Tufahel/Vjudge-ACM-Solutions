#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector< pair<string,string> >v;
    string st,st1;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>st>>st1;
        if(st1=="woman")
            st1="child";
        v.push_back(make_pair(st,st1));
    }
    for(int i=0; i<n; i++)
    {
        if(v[i].second=="rat")
        {
            cout<<v[i].first<<endl;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(v[i].second=="child")
        {
            cout<<v[i].first<<endl;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(v[i].second=="man")
        {
            cout<<v[i].first<<endl;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(v[i].second=="captain")
        {
            cout<<v[i].first<<endl;
        }
    }
}
