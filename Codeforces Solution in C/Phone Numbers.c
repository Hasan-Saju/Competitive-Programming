#include<stdio.h>
#include<string.h>
int main()
{
    int n,len,count=0,num,ans,i;
    scanf("%d",&n);

    char ara[n];
    scanf("%s",ara);

    len=strlen(ara);

    for(i=0;i<len;i++)
    {
        if(ara[i]=='8')count++;
    }
    num=n/11;

    if(num<count)ans=num;
    else ans=count;
    printf("%d",ans);

}
