#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100003
#define sc scanf
#define pf printf
#define ll int
#define Mx 1000000007
//bool isPrime[sz];
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;
int main()
{
    string st;
    while(getline(cin,st)){
        if(st=="*")
            break;
        ll n=st.length();
        for(ll i=0; i<n; i++){
            if(st[i]>=97 && st[i]<=122)
                st[i]=st[i]-32;
        }
        char ch=st[0];
        ll f=0;
        for(ll i=0; i<n; i++){
            if(!isalpha(st[i])){
                if(st[i+1]!=ch){
                    f=1;
                    break;
                }
            }
        }
        if(f==1)
            cout<<"N"<<endl;
        else
            cout<<"Y"<<endl;
    }

}
