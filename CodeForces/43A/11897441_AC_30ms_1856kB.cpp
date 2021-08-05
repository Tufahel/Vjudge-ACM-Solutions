#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,x=0,y=0;
    string st;
    string st1,st2;
    cin>>n;
    for(i=0;  i<n; i++)
    {

        cin>>st;
        int length=st.length();
        if(i==0)
            st1=st;
        if(st==st1)
            x++;
        else if(st!=st1)
        {
            st2=st;
            y++;
        }
            //y++;

    }
    //y=n-x;
    if(y>x)
        cout<<st2<<endl;
    else
        cout<<st1<<endl;


}
