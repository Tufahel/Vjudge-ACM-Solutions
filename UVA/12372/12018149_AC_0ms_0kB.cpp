#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,L,W,H,t;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d%d",&L,&W,&H);
        if(L<=20 && W<=20 && H<=20)
            printf("Case %d: good\n",i+1);
        else
            printf("Case %d: bad\n",i+1);
    }
}
