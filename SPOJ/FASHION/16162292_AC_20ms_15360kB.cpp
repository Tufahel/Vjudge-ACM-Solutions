#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        int male[n+3],female[n+3];
        for(int j=0; j<n; j++)
            cin>>male[j];
        for(int j=0; j<n; j++)
            cin>>female[j];
        sort(male,male+n);
        sort(female,female+n);
        int sum=0;
        for(int j=n-1; j>=0; j--)
            sum=sum+(male[j]*female[j]);
        cout<<sum<<endl;
    }
}
