#include<stdio.h>
#include<string.h>
int main()
{
    int sum=0,count=0,i,j,k;
    char str[100];
    scanf("%s",&str);
    int l=strlen(str);

    for(i=0;i<l;i++)
    {
        count=0;
        for(j=0;j<l;j++)
        {

            if(str[i]==str[j])count++;
        } printf("%d\n",count);
        if(count==1)sum=sum+str[i];
    }if(count%2==0)printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");


k='w'+'z'+'m'+'j'+'b'+'r';
printf("%d   %d",k,sum);


}
