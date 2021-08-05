#include<bits/stdc++.h>
#define ll long long
#define sz 1001
using namespace std;
int move_row[4]= {1,-1,0,0};
int move_col[4]= {0,0,1,-1};
int visited[sz][sz];
int cost[sz][sz],ux,uy,vx,vy;
char grid[sz][sz];
int flag=0;
int bfs(int sr,int sc,int er,int ec)
{
    cost[sr][sc]=0;
    visited[sr][sc]=1;
    queue<int>Q;
    Q.push(sr);
    Q.push(sc);
    while(!Q.empty())
    {
        ux=Q.front();
        Q.pop();
        uy=Q.front();
        Q.pop();
        for(int i=0; i<4; i++)
        {
            vx=ux+move_row[i];
            vy=uy+move_col[i];
            if(grid[vx][vy]=='X' && vx==er && vy==ec)
                return 1;
            if(visited[vx][vy]==0 && grid[vx][vy]=='.')
            {
                visited[vx][vy]=1;
                cost[vx][vy]=cost[ux][uy]+1;
                grid[vx][vy]='X';
                //level[v]=level[u]+1;
                Q.push(vx);
                Q.push(vy);
                //if(vx==er && vy==ec)
                    //flag=1;
            }

        }
    }
    return 0;
}

int main()
{
    int n,m,st_r,st_c,en_r,en_c;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>grid[i][j];
        }
    }
    cin>>st_r>>st_c;
    st_r--,st_c--;
    cin>>en_r>>en_c;
    en_r--,en_c--;
    int x=bfs(st_r,st_c,en_r,en_c);

    if(x==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    //cout<<cost[en_r][en_c];
    /*for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<cost[i][j]<<" ";
        }
        cout<<endl;
    }*/

}
/*
input:
4 5
@.*.D
.**..
.....
*****

output:
0 1 0 7 8
1 0 0 6 7
2 3 4 5 6
0 0 0 0 0
*/
