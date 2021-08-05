#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    while(cin>>n && n){
        int c=1;
        stack<int>s;
        for(int i=1; i<=n; i++){
            cin>>x;
            if(x==c){
                c++;
                x=-1;
            }
            while(s.size() && s.top()==c){
                c++;
                s.pop();
            }
            if(x!=-1)
                s.push(x);
        }
        while(s.size() && s.top()==c){
            c++;
            s.pop();
        }
        if(s.size())
            cout<<"no";
        else
            cout<<"yes";
        cout<<endl;

    }
}
