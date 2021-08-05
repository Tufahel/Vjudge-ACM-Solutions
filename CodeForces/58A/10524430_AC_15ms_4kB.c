#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,flag=0;
    char st[100];
    gets(st);
    int n=strlen(st);
    for(i=0; i<n; i++)
    {
        if(st[i]=='h')
        {
            for(j=i+1; j<n; j++)
            {
                if(st[j]=='e')
                {
                    for(k=j+1; k<n; k++)
                    {
                        if(st[k]=='l')
                        {
                            for(l=k+1; l<n; l++)
                            {
                                if(st[l]=='l')
                                {
                                    for(m=l+1; m<n; m++)
                                    {
                                        if(st[m]=='o')
                                        {
                                            flag=1;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");
}
