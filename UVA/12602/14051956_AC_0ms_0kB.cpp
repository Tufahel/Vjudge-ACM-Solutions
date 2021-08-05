#include<bits/stdc++.h>
#define long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string st;
        cin>>st;
        int a=st[0]-65;
        int b=st[1]-65;
        int c=st[2]-65;
        int x=powl(26,2);
        int y=powl(26,1);
        int z=powl(26,0);
        a=a*x;
        b=b*y;
        c=c*z;
        int total=a+b+c;
        int u=((st[4]-48)*1000)+((st[5]-48)*100)+((st[6]-48)*10)+(st[7]-48);
        int dif=abs(total-u);
        if(dif<=100)
            cout<<"nice"<<endl;
        else
            cout<<"not nice"<<endl;

    }
}
