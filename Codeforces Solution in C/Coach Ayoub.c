#include<stdio.h>
int main()
{
    int n,a,b,s,flag=0,sum=0,i;
    scanf("%d %d %d %d",&n,&a,&b,&s);

    int ara[n];

    for(i=0;i<n;i++)
    {


    scanf("%d",&ara[i]);
    if(ara[i]>b||ara[i]<a)flag=1;
    sum=sum+ara[i];

    }
    if(!flag&&sum==s)printf("YES");
    else printf("NO");
}
