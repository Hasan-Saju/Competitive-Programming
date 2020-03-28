#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    scanf("%d",&n);

    char s[n+5];

    //fflush(stdin);
    //gets(s);
cin>>s;

if(n==1)
{
    if(s[0]=='0')printf("0");
    else printf("1");
}
else
{

    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='0')count++;
    }
    printf("1");

    for(i=0;i<count;i++)
    {
        printf("0");
    }
}

}
