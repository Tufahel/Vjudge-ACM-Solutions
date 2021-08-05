#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int x1,x2,y1,y2;
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        printf("Case %d:\n",i);
        int q;
        scanf("%d",&q);

        for(int j=1; j<=q; j++){
            int x,y;
            scanf("%d%d",&x,&y);
            if(x>x1 && x<x2 && y>y1 && y<y2){
                printf("Yes\n");
            }
            else
                printf("No\n");
        }
    }
}
