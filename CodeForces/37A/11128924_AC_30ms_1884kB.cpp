#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,i,j,p=1,s=1,x=1;
    scanf("%d",&a);
    int arr[a];
    for(i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+a);
    for(i=1; i<a; i++)
    {

        if(arr[i]==arr[i-1])
            p++;
        else
        {
            p=1;
            s++;
        }
        x=max(x,p);

}
    printf("%d %d",x,s);
}
