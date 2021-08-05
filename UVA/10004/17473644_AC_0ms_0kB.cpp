#include<bits/stdc++.h>
#define sz 10100
using namespace std;
int visited[sz];
vector<int>adj[sz];
int u,v,c,f;
void bfs(int s)
{
    visited[s]=0;
    queue<int>Q;
    Q.push(s);
    while(!Q.empty())
    {
        u=Q.front();
        //cout<<u<<endl;
        Q.pop();
        int sze=adj[u].size();
        for(int i=0; i<sze; i++)
        {
            v=adj[u][i];
            if(visited[v]==0)
            {
                //level[v]=level[u]+1;
                //par[v]=u;
                if(visited[u]==1)
                    visited[v]=-1;
                else
                    visited[v]=1;
                Q.push(v);
            }
            else
            {
                if(visited[v]==visited[u])
                    f=1;
            }
        }
    }
}
void clr()
{
    for(int i=0; i<sz; i++)
        adj[i].clear();
}
int main()
{
    int n,e,x,y;
    while(cin>>n)
    {
        if(n==0)
            break;
        f=0;
        cin>>e;
        for(int j=0; j<e; j++)
        {
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bfs(0);
        if(f==0){
            cout<<"BICOLORABLE."<<endl;
        }
        else{
            cout<<"NOT BICOLORABLE."<<endl;
        }
        clr();
        memset(visited,0,sz);
    }
    //memset(par,0,sz);
    //memset(level,0,sz);
//cout<<cnt<<endl;
//cout<<c<<endl;
}
