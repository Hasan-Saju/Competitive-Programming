#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[200],str2[200],str3[200];
    scanf("%s %s",&str,&str2);

    int len=strlen(str);

    for(i=0;i<len;i++)
    {
        if(str[i]=='0'&&str2[i]!='0')str3[i]='1';
               else if(str[i]=='1'&&str2[i]!='1')str3[i]='1';
                  else str3[i]='0';

    }


        for(i=0;i<len;i++)
        {

        printf("%c" ,str3[i]);

        }

}
