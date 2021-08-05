//'[ْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*//

#include<bits/stdc++.h>
using namespace std;
#define sz2 18409202
#define sz1 700003
#define sc scanf
#define pf printf
#define ll long long
#define Mx 1000000007
//bool isPrime[sz];
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;
//long long lazy[sz1];
//long long tree[sz1*4];
//ll arr[sz1*3];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=1; i<=t; i++){
        double x1,y1,r1,x2,y2,r2;
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        if(r1<r2){
            swap(r1,r2);
            swap(x1,x2);
            swap(y1,y2);
        }
        double dist=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        double theta1=acos((r1*r1+dist*dist-r2*r2)/(2.0*r1*dist));
        double theta2=acos((r2*r2+dist*dist-r1*r1)/(2.0*r2*dist));
        //cout<<fixed<<setprecision(6)<<theta1<<" "<<theta2<<endl;
        double sector1=0.5*(r1*r1)*(2*theta1);
        double triangle1=0.5*(r1*r1)*(sin(2*theta1));
        double shade1=sector1-triangle1;
        double sector2=0.5*(r2*r2)*(2*theta2);
        double triangle2=0.5*(r2*r2)*(sin(2*theta2));
        double shade2=sector2-triangle2;
        double shaded=shade1+shade2;
        if(r1+r2<=dist)
            shaded=0;
        else if(fabs(r1-r2)>=dist){
            double r=min(r1,r2);
            shaded=acos(-1)*r*r;
            cout<<"Case "<<i<<": "<<fixed<<setprecision(8)<<shaded<<endl;
            continue;
        }
        cout<<"Case "<<i<<": "<<fixed<<setprecision(8)<<shaded<<endl;
    }
}
