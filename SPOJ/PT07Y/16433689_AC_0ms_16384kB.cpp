#include<bits/stdc++.h>

using namespace std;

vector <int> adj[10006];
bool visited[10008];
set<int>save;
void dfs(int s)
{
    visited[s] = true;
    save.insert(s);
    for(int i = 0; i < adj[s].size(); ++i)
    {
        if(visited[adj[s][i]] == false)
            dfs(adj[s][i]);
    }
}

void initialize()
{
    for(int i = 0; i < 10; ++i)
        visited[i] = false;
}

int main()
{
    int nodes, edges, x, y, connectedComponents = 0;
    cin >> nodes;                       //Number of nodes
    cin >> edges;                       //Number of edges
    for(int i = 0; i < edges; ++i)
    {
        cin >> x >> y;
        //Undirected Graph
        adj[x].push_back(y);                   //Edge from vertex x to vertex y
        adj[y].push_back(x);                   //Edge from vertex y to vertex x
    }
    if(nodes-1!=edges){
        cout<<"NO"<<endl;
        return 0;
    }
    initialize();                           //Initialize all nodes as not visited
    dfs(1);
    if(save.size()==nodes){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
