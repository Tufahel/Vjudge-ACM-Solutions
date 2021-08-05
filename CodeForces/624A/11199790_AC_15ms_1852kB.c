#include<stdio.h>

//using namespace std;

int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    double ans=((b-a)*1.0)/(c+d);
    printf("%.20lf\n",ans);
}
