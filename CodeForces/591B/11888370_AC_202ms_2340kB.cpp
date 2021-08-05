#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,i,j;
    string st,s="abcdefghijklmnopqrstuvwxyz";
    cin>>a>>b;
    char ch1,ch2;
    cin>>st;
    for(i=0; i<b; i++)
    {
        cin>>ch1>>ch2;
        for(j=0; j<s.size(); j++)
        {
            if(s[j]==ch1)
            {
                s[j]=ch2;
            }
            else if(s[j]==ch2)
            {
                s[j]=ch1;
            }
        }
    }
    for(i=0; i<a; i++)
        cout<<s[st[i]-'a'];


}
