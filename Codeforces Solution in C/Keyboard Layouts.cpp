#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<iostream>
using namespace std;
int main()
{
    int i,j,flag=0;

    char s1[27];
    char s2[27];

    scanf("%s %s",s1,s2);

    char s[1005];
    //fflush(stdin);
    //gets(s);
    cin>>s;
   // cout<<s<<" "<<flag<<" "<<"hello world"<<"\n";
    char ch;
    int len= strlen(s);

    for(i=0;i<len;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
           ch=tolower(s[i]);
           s[i]=ch;
            flag=1;
        }

        for(j=0;j<26;j++)
        {
            if(s[i]==s1[j])
            {
                s[i]=s2[j];
                if(flag)
                {
                    ch=toupper(s[i]);
                    s[i]=ch;
                }

                flag=0;
                break;
            }
        }
    }

    printf(s);



}
