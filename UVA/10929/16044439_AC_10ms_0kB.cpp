#include<bits/stdc++.h>

using namespace std;

int main()
{
    string st;
    while(cin>>st){
        if(st=="0")
            return 0;
        int n=st.size();
        int sum=0;
        for(int i=0; i<n; i+=2) sum+=(st[i]-48);
        for(int i=1; i<n; i+=2) sum-=(st[i]-48);
        if(sum%11==0)
            cout<<st<<" is a multiple of 11."<<endl;
        else
            cout<<st<<" is not a multiple of 11."<<endl;
    }
}
