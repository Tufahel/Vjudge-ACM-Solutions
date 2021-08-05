#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j;
    cin>>t;
    string st;
    int arr[10000];
    for(i=0; i<t; i++)
    {
        int sum=0;
        cin>>st;
        int len=st.length();
        for(j=0; j<len; j++)
        {
            if(st[j]=='I')
                arr[j]=1;
            else if(st[j]=='V')
                arr[j]=5;
            else if(st[j]=='X')
                arr[j]=10;
            else if(st[j]=='L')
                arr[j]=50;
            else if(st[j]=='C')
                arr[j]=100;
            else if(st[j]=='D')
                arr[j]=500;
            else if(st[j]=='M')
                arr[j]=1000;
        }
        for(j=0; j<len; j++)
        {
            if(j<len-1 && (arr[j]<arr[j+1]))
                arr[j]=-arr[j];
            sum=sum+arr[j];
        }
        printf("Case %d: %d\n",i+1,sum);
    }
}
