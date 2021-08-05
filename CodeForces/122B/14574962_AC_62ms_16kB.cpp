/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 11111111
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
//bool isPrime[sz];
//ll arr[100002];
//ll num[4000];
//string st;
int main()
{
    string st;
    cin>>st;
    ll f=0,s=0;
    for(ll i=0; i<st.size(); i++){
        if(st[i]=='4')
            f++;
        else if(st[i]=='7')
            s++;
    }
    if(f==0 && s==0)
        cout<<-1<<endl;
    else if(f<s)
        cout<<7<<endl;
    else if(f>=s)
        cout<<4<<endl;
}

