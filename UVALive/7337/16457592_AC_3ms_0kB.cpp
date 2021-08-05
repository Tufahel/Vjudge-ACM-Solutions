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
//bool cmp(pair<ll,ll>a, pair<ll,ll>b)
int main()
{
    int n;
    cin>>n;
    string mnth[14]={"0","JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
    string day[9]={"0","SUN","MON","TUE","WED","THU","FRI","SAT"};
    int arr[14]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=1; i<=n; i++){
        string m,d;
        cin>>m>>d;
        int x=0,y=0,cnt=0;
        for(int j=1; j<14; j++){
            if(m==mnth[j]){
                x=j;
                break;
            }
        }
        for(int j=1; j<9; j++){
            if(d==day[j]){
                y=j;
                break;
            }
        }
        for(int j=1; j<=arr[x]; j++){
            if(y>7)
                y=1;
            if(day[y]=="FRI" || day[y]=="SAT")
                cnt++;
            y++;
        }
        cout<<cnt<<endl;
    }
}
