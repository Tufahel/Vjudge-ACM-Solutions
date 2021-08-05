#include<bits/stdc++.h>

using namespace std;

int main()
{
    string st;
    int a;
    cin>>st;
    a=st.find("WUB");
    while(a!=-1)
    {
        st.replace(a,3," ");
        a=st.find("WUB");
    }
    cout<<st;
}
