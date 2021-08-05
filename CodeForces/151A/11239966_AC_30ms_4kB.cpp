#include<bits/stdc++.h>

using namespace std;

int  main()
{
    int n,k,l,c,d,p,nl,np,prod,div,prod1,div1,result,result1;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    prod=k*l;
    div=prod/nl;
    prod1=c*d;
    div1=p/np;
    result=min(div,prod1);
    result1=min(result,div1)/n;
    cout<<result1<<endl;

}

