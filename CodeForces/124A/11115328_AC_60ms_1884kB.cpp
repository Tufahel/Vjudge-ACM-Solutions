#include<bits/stdc++.h> 

using namespace std; 

int main() 
{ 
    int a,b,c; 
    while(scanf("%d%d%d",&a,&b,&c)==3)
     { 
        printf("%d",min(a-b,c+1)); 
     } 
}