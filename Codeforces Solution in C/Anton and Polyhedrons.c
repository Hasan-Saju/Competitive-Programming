#include<stdio.h>
int main()
{
    char str[15];
    int i,n,sum=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",&str);

        if(str[0]=='T')sum=sum+4;
        if(str[0]=='C')sum=sum+6;
        if(str[0]=='O')sum=sum+8;
        if(str[0]=='D')sum=sum+12;
        if(str[0]=='I')sum=sum+20;
    }

    printf("%d",sum);

}
