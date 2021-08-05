#include<bits/stdc++.h>
#define ll long long
#define Mx LONG_LONG_MAX
using namespace std;

int main()
{
    ll n,x;
    cin>>n;
    x=n%10;
    if(n==0)
        cout<<"zero"<<endl;
    else if(n==1)
        cout<<"one"<<endl;
    else if(n==2)
        cout<<"two"<<endl;
    else if(n==3)
        cout<<"three"<<endl;
    else if(n==4)
        cout<<"four"<<endl;
    else if(n==5)
        cout<<"five"<<endl;
    else if(n==6)
        cout<<"six"<<endl;
    else if(n==7)
        cout<<"seven"<<endl;
    else if(n==8)
        cout<<"eight"<<endl;
    else if(n==9)
        cout<<"nine"<<endl;
    else if(n==10)
        cout<<"ten"<<endl;
    else if(n==11)
        cout<<"eleven"<<endl;
    else if(n==12)
        cout<<"twelve"<<endl;
    else if(n==13)
        cout<<"thirteen"<<endl;
    else if(n==14)
        cout<<"fourteen"<<endl;
    else if(n==15)
        cout<<"fifteen"<<endl;
    else if(n==16)
        cout<<"sixteen"<<endl;
    else if(n==17)
        cout<<"seventeen"<<endl;
    else if(n==18)
        cout<<"eighteen"<<endl;
    else if(n==19)
        cout<<"nineteen"<<endl;
    else if(n>=20 && n<30){
        cout<<"twenty";
        if(x==0)
            return 0;
    }
    else if(n>=30 && n<40){
        cout<<"thirty";
        if(x==0)
            return 0;
    }
    else if(n>=40 && n<50){
        cout<<"forty";
        if(x==0)
            return 0;
    }
    else if(n>=50 && n<60){
        cout<<"fifty";
        if(x==0)
            return 0;
    }
    else if(n>=60 && n<70){
        cout<<"sixty";
        if(x==0)
            return 0;
    }
    else if(n>=70 && n<80){
        cout<<"seventy";
        if(x==0)
            return 0;
    }
    else if(n>=80 && n<90){
        cout<<"eighty";
        if(x==0)
            return 0;
    }
    else if(n>=90){
        cout<<"ninety";
        if(x==0)
            return 0;
    }
    if(x==1 && n>=20)
        cout<<"-one"<<endl;
    else if(x==2 && n>=20)
        cout<<"-two"<<endl;
    else if(x==3 && n>=20)
        cout<<"-three"<<endl;
    else if(x==4 && n>=20)
        cout<<"-four"<<endl;
    else if(x==5 && n>=20)
        cout<<"-five"<<endl;
    else if(x==6 && n>=20)
        cout<<"-six"<<endl;
    else if(x==7 && n>=20)
        cout<<"-seven"<<endl;
    else if(x==8 && n>=20)
        cout<<"-eight"<<endl;
    else if(x==9 && n>=20)
        cout<<"-nine"<<endl;

}
