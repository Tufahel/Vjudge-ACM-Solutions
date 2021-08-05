#include<bits/stdc++.h>
#include<string.h> 
using namespace std; 
map<string,int>mp; 
long int reversDigits(long int num)
{ 
    long int rev_num = 0; 
    while(num > 0) 
    { 
        rev_num = rev_num*10 + num%10; 
        num = num/10; 
    } 
    return rev_num; 
} 
int main() 
{ 
    long int t,num; 
    scanf("%ld",&t); 
    for(int i=1; i<=t; i++) 
    { 
        scanf("%ld",&num); 
        //long int k=reversDigits(num); 
        if(reversDigits(num)==num)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    } 
}