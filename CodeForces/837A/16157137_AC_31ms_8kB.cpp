#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,mx=0,c=0;
    cin>>n;
    getchar();
    string st;
    getline(cin,st);
    for(int i=0; i<n; i++){
        if(isalpha(st[i])){
            if(st[i]>=65 && st[i]<=90)
                c++;
        }
        else{
            mx=max(c,mx);
            c=0;
        }
    }
    mx=max(c,mx);
    cout<<mx<<endl;
}
