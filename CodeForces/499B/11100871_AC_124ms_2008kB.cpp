#include<bits/stdc++.h>

 using namespace std;

 struct item
 {
     string x;
     string y;
     item(){}
     item(string p, string q)
     {
         p=x;
         q=y;
     }
 };
 int main()
 {
     int a,b,i,j;
     cin>>b>>a;
     item arr[a];
     for(i=0; i<a; i++)
     {
         cin>>arr[i].x>>arr[i].y;
     }
     for(j=0; j<b; j++)
     {
         string str;
         cin>>str;
         for(i=0; i<a; i++)
         {
             if(str==arr[i].x || str==arr[i].y)
             {
                 if(arr[i].x.length()<=arr[i].y.length())
                 {
                     cout<<arr[i].x<<" ";
                 }
                 else
                 {
                     cout<<arr[i].y<<" ";
                 }
                 break;
             }
         }
     }

 }
