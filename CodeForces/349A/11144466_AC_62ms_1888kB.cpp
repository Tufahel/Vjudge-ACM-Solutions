#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,i,j,sum=0,flag=0;
    scanf("%d",&n);
    int cnt[6];
    cnt[0]=0;
    cnt[1]=0;
    cnt[2]=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a);
        if(i==0 && a!=25)
            flag=1;
        else
        {
            if(a==25)
                cnt[0]++;
            else if(a==50)
            {
                cnt[0]--;
                cnt[1]++;
            }
            else if(a==100)
            {
                cnt[2]++;
                if(cnt[0]>=1 && cnt[1]>=1)
                {
                    cnt[0]--;
                    cnt[1]--;
                }
                else if(cnt[0]>=3)
                    cnt[0]=cnt[0]-3;
                else
                    flag=1;
            }
        }
        if(cnt[0]<0 || cnt[1]<0 || cnt[2]<0)
                flag=1;

    }
    if(flag==1)
        printf("NO\n");
    else
        printf("YES\n");
}
