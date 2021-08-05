#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int n,m;
int n1[112];
int main()
{
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int mm=0;
        int dd=1;
        int c;
        for(int j=1; j<=n; j++)
        {
            cin>>c;
            if(c>mm)
            {
                mm=c;
                dd=j;
            }
        }
        n1[dd]++;
    }
    int mm=1;
    for(int i=1; i<=n; i++)
    {
        if(n1[mm] >= n1[i])
            continue;
        mm=i;
    }
    cout<<mm<<endl;
}
