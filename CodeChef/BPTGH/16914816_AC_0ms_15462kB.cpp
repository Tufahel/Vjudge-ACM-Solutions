#include<bits/stdc++.h>
using namespace std;

vector< int > adj[10000];
int color[10000];

bool isBipartitite(int source){

    queue<int> q;
    color[source] = 1; // color 1

    q.push(source);

    while(!q.empty()){

        int front = q.front();
        q.pop();

        for( int i = 0; i < adj[front].size(); i++ ){

            int v = adj[front][i];

            if(color[front] == color[v])
                return false;


            if( color[v] == -1 ){

                if(color[front] == 1){
                    color[v] = 2;
                }
                else if(color[front] == 2){
                    color[v] = 1;
                }

                q.push(v);

            }
        }

    }

    return true;
}

int main() {
    // insert code here...

    int n,m;
    cin >> n >> m;
    for( int i = 0; i < m; i++ ){
        int u,v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    for(int i = 0; i <= n; i++ )
        color[i] = -1;              // unvisited node initialized to -1

    bool ans = true;

    for( int i = 1; i <= n; i++ ){
        if(color[i] == -1){
            ans = isBipartitite(i);
            if(ans == false)
                break;
        }
    }

    if(ans){
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}
