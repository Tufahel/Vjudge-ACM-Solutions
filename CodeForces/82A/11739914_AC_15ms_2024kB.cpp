#include<bits/stdc++.h>

using namespace std;

int main()
{
    string st[5]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int n;
    cin>>n;
    while(n>5)
    {
        n=(n/2)-2;
    }
    cout<<st[n-1]<<endl;
}
