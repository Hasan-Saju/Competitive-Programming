#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);

    char s[n+5];

    fflush(stdin);
    gets(s);

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
