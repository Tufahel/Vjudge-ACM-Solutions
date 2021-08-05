#include<bits/stdc++.h>
#define MX 10000007
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string st;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>st;
        string st1;
        st1=st;
        reverse(st1.begin(),st1.end());
        if(st1==st)
            cout<<"Case "<<i<<": Yes"<<endl;
        else
            cout<<"Case "<<i<<": No"<<endl;
    }
}
