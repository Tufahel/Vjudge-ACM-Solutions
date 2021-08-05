#include<bits/stdc++.h>

using namespace std;

int main()
{
    string st;
    cin>>st;
    int n=st.length();
    int c=0;
    for(int i=0; i<n; i++){
        if(st[i]=='Q'){
            for(int j=i+1; j<n; j++){
                if(st[j]=='A'){
                    for(int k=j+1; k<n; k++){
                        if(st[k]=='Q')
                            c++;
                    }
                }
            }
        }
    }
    cout<<c<<endl;
}