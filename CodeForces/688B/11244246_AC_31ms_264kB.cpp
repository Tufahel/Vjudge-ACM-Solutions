#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    cout<<str;
    int n=str.size();
    for(int i=n-1; i>=0; i--)
        cout<<str[i];
    cout<<endl;
}
