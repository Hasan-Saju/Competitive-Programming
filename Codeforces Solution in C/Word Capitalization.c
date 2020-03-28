#include<stdio.h>
int main()
{
    char str[1000];
    int i;
    scanf("%s",&str);


    i=0;
    if(str[i]>='A'&&str[i]<='Z')
        str[i]=str[i];
    else if(str[i]>='a'&&str[i]<='z')
    {
        str[i]=str[i]-32;
    }

    printf("%s",str);



}
