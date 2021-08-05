#include<bits/stdc++.h>

using namespace std;
vector<int>v;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int c=0;
    for(int i=1; i<n-1; i++)
    {
        if(v[i]>v[i-1] && v[i]>v[i+1])
            c++;
        else if(v[i]<v[i-1] && v[i]<v[i+1])
            c++;
    }
    cout<<c<<endl;
}