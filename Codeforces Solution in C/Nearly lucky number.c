#include<stdio.h>
int main()
{
    long long n,i,j,ans,remain,count=0,k,flag=0,c=0;
    scanf("%lld",&n);

    int ara[1000];
    int ara2[100];

    for(i=0; ;i++)
    {
        remain=n%10;
        ara[i]=remain;
        ans=n/10;
        n=ans;
        if(ans==0)break;
    } ara[i+1]=n;

    for(j=0;j<i+1;j++)
    {
        if(ara[j]==4||ara[j]==7)count++;
        else c++;

    }
printf("%d %d",count,c);


      for(k=0; ;k++)
    {
        remain=count%10;
        ara2[k]=remain;
        ans=count/10;
        count=ans;
        if(count==0)break;
    } ara2[k+1]=count;


    for(i=0;i<k+1;i++)
    {
        if(ara2[i]==4||ara2[k]==7)flag=0;
        else flag=1;



    }

    if(!flag)printf("YES");
    else printf("NO");







}
