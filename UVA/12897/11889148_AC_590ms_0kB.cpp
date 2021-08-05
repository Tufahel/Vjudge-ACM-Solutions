#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    while(n--)
    {
        string st,s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        char ch1,ch2;
        int a;
        //getchar();
        cin>>st;
        cin>>a;
        //getchar();
        for(i=0; i<a; i++)
        {
            cin>>ch1>>ch2;
            for(j=0; j<s.size(); j++)
            {
                /*if(s[j]==ch1)
                {
                    s[j]=ch2;
                }*/
                if(s[j]==ch2)
                {
                    s[j]=ch1;
                }
            }
        }
        for(i=0; i<st.size(); i++)
        {
            if(isalpha(st[i]))
                cout<<s[st[i]-'A'];
            else
                cout<<st[i];
        }
        cout<<endl;
    }



}
