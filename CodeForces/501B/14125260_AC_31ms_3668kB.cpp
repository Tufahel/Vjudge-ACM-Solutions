#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<string,int>num;
    map<string,string>mp;
    vector<string>vt;
    int n;
    cin>>n;
    string x,y;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        if(num[x]==0)
        {
            num[x]=-1;
            num[y]=1;
            mp[y]=x;
            vt.push_back(x);
        }
        else
        {
            mp[y]=mp[x];
            num[y]=1;
            mp[x]="**";
        }
    }
    cout<<vt.size()<<endl;
    for (std::map<string,string>::iterator it=mp.begin(); it!=mp.end(); ++it)
    {
        if(it->second!="**")
        {
            cout<<it->second<<" "<<it->first<<endl;
        }
    }
}