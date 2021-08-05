#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int fn,we;
        cin>>fn>>we;
        if(we>fn)
            cout<<"WeWillEatYou"<<endl;
        else
            cout<<"FunkyMonkeys"<<endl;
    }
}

