#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100003
#define sc scanf
#define pf printf
#define ll long long int
#define Mx 1000000007
#define PI 2*acos(0)
//bool isPrime[sz];
//ll arr[100];
//ll num[4000];
//string st;
//double con=10000;
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double x1,y1,x2,y2,x3,y3,x4,y4,arr[10];
    while(sc("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)!=EOF){
        double midx,midy,x5,y5;
        if(x1==x3 && y1==y3){
            swap(x1,x2);
            swap(y1,y2);
        }
        else if(x1==x4 && y1==y4){
            swap(x1,x2);
            swap(y1,y2);
            swap(x3,x4);
            swap(y3,y4);
        }
        else if(x2==x4 && y2==y4){
            swap(x3,x4);
            swap(y3,y4);
        }
        midx=(x1+x4)/2.0;
        midy=(y1+y4)/2.0;
        x5=(2.0*midx)-x2;
        y5=(2.0*midy)-y2;
        //cout<<fixed<<setprecision(3)<<x1<<" "<<y1<<" ";
        //cout<<fixed<<setprecision(3)<<x2<<" "<<y2<<" ";
        //cout<<fixed<<setprecision(3)<<x3<<" "<<y3<<" ";
       //cout<<fixed<<setprecision(3)<<x4<<" "<<y4<<endl;
        cout<<fixed<<setprecision(3)<<x5<<" "<<y5<<endl;
    }

}
