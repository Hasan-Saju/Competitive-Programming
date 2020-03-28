#include<stdio.h>
int main()
{
    int i,n,remain,ans;
    int sum=0;
    scanf("%d",&n);

    for(i=10;n>0;i++)
    {
        remain=n%i;
        ans=n/i;        sum=sum+remain;
        n=ans;
    }

    sum=sum+n;
    printf("%d\n",sum);
}

