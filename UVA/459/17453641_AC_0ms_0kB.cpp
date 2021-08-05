#include<bits/stdc++.h>
#define sz 10000
using namespace std;
int visited[sz];
vector<int>adj[10000];
int u,v,c;
void bfs(int s)
{
    //level[s]=0;
    visited[s]=1;
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
                Q.push(v);
                visited[v]=1;
            }
        }
    }
}
int main()
{
    int x,y,n,b,t;
    string ch1,ch2;
    cin>>t;
    getchar();
    getchar();
    for(int j=0; j<t; j++)
    {
        cin>>ch2;
        n=ch2[0]-64;
        //b=n-1;
        getchar();
        while(getline(cin,ch1)){
            //cin>>ch2;
            if(ch1.empty())
                break;
            x=ch1[0]-64, y=ch1[1]-64;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int cnt=0;
        //bfs(1);
        for(int i=1; i<=n; i++)
        {
            if(visited[i]==0)
            {
                bfs(i);
                cnt++;
            }
            //cout<<visited[i]<<" ";
        }
        cout<<cnt<<endl;
        if(j!=t-1)
            cout<<endl;
        memset(adj,0,sizeof(adj));
        memset(visited,0,sz);
        //memset(par,0,sz);
        //memset(level,0,sz);


    }
    //cout<<cnt<<endl;
//cout<<c<<endl;
}
