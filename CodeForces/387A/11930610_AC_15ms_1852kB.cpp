#include<bits/stdc++.h>

using namespace std;

int main()
{
    string st,st1;
    int i,j,a,b,c;
    cin>>st>>st1;
    int h1=10*(st[0]-48)+(st[1]-48);
    int m1=10*(st[3]-48)+(st[4]-48);
    //cout<<num<<endl;
    int h2=10*(st1[0]-48)+(st1[1]-48);
    int m2=10*(st1[3]-48)+(st1[4]-48);
    //cout<<num<<" "<<num1<<" "<<num2<<" "<<num3<<endl;
    if(h1<h2)
        h1=h1+24;
    else if(h1==h2 && m2>m1)
    {
        h1=h1+23;
        m1=m1+60;
    }
    if(m2>m1 && h1==0)
    {
        m1=60+m1;
        h1=23;
    }
    else if(m2>m1 && h1!=h2 && h1!=0)
    {
        m1=60+m1;
        h1=h1-1;
    }
    int sum=abs(h1-h2);
    int sum1=abs(m1-m2);
    if(sum<10 && sum1<10)
    {
        cout<<"0"<<sum<<":"<<"0"<<sum1<<endl;
    }
    else if(sum<10 && sum1>=10)
    {
        cout<<"0"<<sum<<":"<<sum1<<endl;
    }
    else if(sum>=10 && sum1<10)
    {
        cout<<sum<<":"<<"0"<<sum1<<endl;
    }
    else
        cout<<sum<<":"<<sum1<<endl;


}
