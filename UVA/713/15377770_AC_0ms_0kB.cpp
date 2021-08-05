#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int len1,len2 ,i,j,k,n,m,sum,carry,p;
    char ch[10000],des[1000],add[1000];
    scanf("%d",&p);
    for(i=1; i<=p; i++)
    {

        scanf("%s %s",ch,des);
        len1 = strlen(ch);
        len2 = strlen(des);

        if(len1>len2)
        {
            for(j=len2 ; j<len1; j++)
            {
                des[j]='0';
            }
            des[j]='\0';
        }
        else if(len2>len1)
        {
            for(j=len1; j<len2; j++)
            {
                ch[j]='0';
            }
            ch[j]='\0';
        }
        len1 = strlen(ch);

       // reverse (ch,ch+len1);
       // reverse(des,des +len1);
        // cout << ch << ' ' << des<< endl;
        carry=0;
        sum=0;
        for(j=0; j<len1; j++)
        {
            n= ch[j]-48;
            m=des[j]-48;
            sum = n+m +carry;
            if(sum<=9)
            {
                add[j] = sum+48;
                carry = 0;

            }
            else if (sum>9)
            {
                sum=sum%10;
                add[j]=sum+48;
                carry = 1;
            }
        }
        if(carry == 1)
        {
            add[j]= carry+48;
            j++;
        }
        add[j]='\0';
        len1 = j;

       // reverse(add,add +j);
        for(k=0; k<len1; k++)
        {
            if(add[k]!='0')
                break;
        }

        for(j=k; j<len1; j++)
        {
            printf("%c",add[j]);
        }
       cout << endl;
        memset(ch,'\0',sizeof(ch));
        memset(des,'\0',sizeof(des));
        memset(add,'\0',sizeof(add));
    }


}
