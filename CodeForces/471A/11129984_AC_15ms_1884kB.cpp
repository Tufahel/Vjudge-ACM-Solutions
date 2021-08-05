#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,i,j,p=1,q=1;
    int arr[6];
    for(i=0; i<6; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+6);
    for(i=0; i<5; i++)
    {
        if(arr[i]==arr[i+1])
        {
              p++;
              a=arr[i];
        }

        else
            break;
        //printf("%d ",arr[i]);

    }
    for(i=p; i<5; i++)
    {
        a=arr[p];
        if(arr[i]==arr[i+1])
        {
            q++;
        }
        else if(arr[i+1]!=a && (q<4))
        {
            q=1;
        }
        //printf("%d ",arr[i]);

    }
    if((q==4 && p==2) || (q==2 && p==4) || p==6)
        printf("Elephant\n");
    else if((q==1 && p==4) || (q==4 && p==1) || p==5 || q==5)
        printf("Bear\n");
    else
        printf("Alien\n");
    //printf("%d\n",p);
    //printf("%d\n",q);
}