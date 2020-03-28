#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);

    char str[n];
    scanf("%s",&str);

    for(i=0;str[i+1]!='\0';i++)
    {
        if(str[i]==str[i+1])
        {
            count++;

        }
    }printf("%d",count);
}
