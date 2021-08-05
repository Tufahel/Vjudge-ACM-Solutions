#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t;
    for(int i=0; i<n; i++){
        string st;
        cin>>t>>st;
        int cnt=0;
        for(int j=0; j<t; j++){
            if(st[j]=='.'){
                cnt++;
                j+=2;
            }
        }
        cout<<"Case "<<i+1<<": "<<cnt<<endl;
    }
}
