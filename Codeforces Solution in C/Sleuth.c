#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,len;
    char str[100];
    gets(str);

    for(i=0;str[i];i++)str[i]=toupper(str[i]);

    len=strlen(str);

    for(i=len;i>0;i--)
    {
        if(str[i]>='A'&&str[i]<='Z')break;
    }




     if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='Y')printf("YES");
     else printf("NO");


}
