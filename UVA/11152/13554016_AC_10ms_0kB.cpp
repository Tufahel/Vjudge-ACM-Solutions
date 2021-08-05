#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    while(scanf("%d %d %d", &a, &b, &c)!=EOF)
    {
        double range=(a+b+c)/2.0;
        double y=range*(range-a)*(range-b)*(range-c)*1.0;
        double tArea=sqrt(y);
        double Cb=(a*b*c)/4.0/tArea;
        double x=powl(Cb,2);
        double CArea1=(acos(-1)*x)-tArea;
        double n=(range-a)*(range-b)*(range-c)/range;
        double CArea2=(acos(-1)*n);
        double tArea1=(tArea-CArea2);
        printf("%0.4lf %0.4lf %0.4lf\n",CArea1,tArea1,CArea2);
    }
    return 0;


}
