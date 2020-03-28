#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    int n,t,len,i,j;
    scanf("%d %d",&n,&t);

    char temp;

    char str[n+5];
    //fflush(stdin);
    //gets(str);
    cin>>str;

    len=strlen(str);

    for(i=0;i<t;i++)
    {
        for(j=0;j<len-1;)
        {

            if(str[j]=='B'&&str[j+1]=='G')
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
                j+=2;
            }
            else j++;
        }
    }

//printf(str);
cout<<str;
}
