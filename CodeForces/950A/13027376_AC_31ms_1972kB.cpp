#include<bits/stdc++.h>

using namespace std;

int main()
{
    int l,r,a;
    cin>>l>>r>>a;
    int sum=l+r+a;
    int k=abs(l-r);
    if(k<=a)
        cout<<(sum/2)*2<<endl;
    else
        cout<<(min(l,r)+a)*2<<endl;
}