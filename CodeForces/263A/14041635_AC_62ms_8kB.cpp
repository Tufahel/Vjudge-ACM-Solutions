#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[6][6];
    int x,y;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                x=j+1;
                y=i+1;
            }
        }
    }
    x=abs(3-x);
    y=abs(3-y);
    cout<<x+y<<endl;

}
