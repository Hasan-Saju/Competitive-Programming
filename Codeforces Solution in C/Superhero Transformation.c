#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int i,l1,l2,result;
    char s1[1000+50],s2[1000+50];

    gets(s1);
    gets(s2);

    l1=strlen(s1);
    l2=strlen(s2);

    if(l1!=l2)
    {
        printf("NO");
        exit(0);
    }

    for(i=0;i<l1;i++)
    {
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')s1[i]='0';
        else s1[i]='1';
    }
     for(i=0;i<l2;i++)
    {
        if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u')s2[i]='0';
        else s2[i]='1';
    }

    result=strcmp(s1,s2);

    if(!result)printf("YES");
    else printf("NO");


}
