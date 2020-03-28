#include<stdio.h>
#include<string.h>

int main()
{
    int ara[26];
    char str[1000+5];
    gets(str);
    int len,i,sum=0;
    len=strlen(str);

    for(i=0; i<26; i++)
        ara[i]=0;

    for(i=0; i<len; i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            ara[str[i]-'a']=1;
        }
    }
    for(i=0; i<26; i++)
        sum+=ara[i];

    printf("%d",sum);
}
