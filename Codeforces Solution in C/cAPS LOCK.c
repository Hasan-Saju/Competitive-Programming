#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int len=0,count=0,i;
    scanf("%s",&str);
    len= strlen(str);
    for(i=0; i<len; i++)
    {

        if(str[i]>='A'&&str[i]<='Z')
            count++;
    }
    if(count==len)
    {
        for(i=0; i<len; i++)
        {
            str[i]=str[i]+32;
        }
    }
    else if (str[0]>='a'&&str[0]<='z'&&count==len-1)
    {
        for(i=0; i<len; i++)
        {
            if(str[i]>='A'&&str[i]<='Z')
                str[i]=str[i]+32;
            else if(str[i]>='a'&&str[i]<='z')
                str[i]=str[i]-32;
        }
    }

    printf("%s",str);


}
