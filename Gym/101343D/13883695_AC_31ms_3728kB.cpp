#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll j=0; j<t; j++)
    {
        string st;
        cin>>st;
        ll n=st.length();
        ll a=0,b=0,c=0;
        for(ll i=0; i<n; i++)
        {
            if(isalpha(st[i]))
                a++;
            else if(st[i]>='0' && st[i]<='9')
                b++;
            else
                c++;
        }
        if(a>=4 && b>=4 && c<2)
            cout<<"The last character must be a symbol."<<endl;
        else if(a>=4 && b<4 && c>=2)
            cout<<"The last character must be a digit."<<endl;
        else if(a<4 && b>=4 && c>=2)
            cout<<"The last character must be a letter."<<endl;
        else if(a>=4 && b>=4 && c>=2)
            cout<<"The last character can be any type."<<endl;
    }

}
