#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,count2=0,flag=0,flag2=0,i;
    char str[100];
    scanf("%s",&str);

    int len = strlen(str);
    str[len]='0';
    str[len+1]='1';

    for(i=0; i<=len+1; i++)
    {
        if(str[i]=='0')
            count++;
        else
        {
            if(count>=7)
                flag=1;
            count=0;

        }
    }


    for(i=0; i<=len+1; i++)
    {

        if(str[i]=='1')
            count2++;
        else
        {
            if(count2>=7)
                flag2=1;
            count2=0;

        }
    }


    if(flag||flag2)
        printf("YES");
    else
        printf("NO");




}
