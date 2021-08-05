#include<bits/stdc++.h>

using namespace std;

vector<int>adj[100003];
bool visited[100003];
//int cp=0;
void dfs(int s)
{
    visited[s]=true;
    //cp++;
    for(int i=0; i<adj[s].size(); i++)
    {
        if(visited[adj[s][i]]==false)
        {
            dfs(adj[s][i]);
            //cp++;
            //cout<<adj[s][i]<<" "<<s<<" "<<i<<endl;
        }
    }
}

void initialize(int nodes)
{
    for(int i=0; i<=nodes; i++)
    {
        visited[i]=false;
    }
}

int main()
{
    int nodes,edges,x,y,p,cp=0;
    cin>>nodes>>edges;
    //edges=nodes-1;
    for(int i=0; i<edges; i++)
    {
        cin>>x>>y;
        adj[y-1].push_back(x-1);
        adj[x-1].push_back(y-1);
    }
    initialize(nodes);
    dfs(0);
    int f=0;
    if(edges!=nodes-1)
    {
        f=1;
    }
    //cout<<adj[p].size()<<endl;
    else
    {
        for(int i=0; i<nodes; i++)
        {
            if(!visited[i])
                f=1;
        }
    }
    if(!f)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
}
