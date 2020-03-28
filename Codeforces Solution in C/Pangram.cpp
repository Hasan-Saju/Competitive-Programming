#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    char s[100];
    int a[26],len,sum=0,i;

    scanf("%d",&len);

   // gets(s);
   cin>>s;

    strlwr(s);
   // printf(s);

  for(i=0;i<26;i++)
    {
        a[i]=0;
    }

    for(i=0;i<len;i++)
    {
        a[s[i]-'a']=1;

    }

     for(i=0;i<26;i++)
    {
        sum+=a[i];
    }
    if(sum==26)printf("YES");
    else printf("NO");

}
