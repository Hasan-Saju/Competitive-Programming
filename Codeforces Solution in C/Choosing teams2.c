#include<stdio.h>
int main()
{
    int n,k,i,team,count=0;
    scanf("%d %d",&n,&k);

    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);

    }

    for(i=0;i<n;i++)
    {
        if(ara[i]<=5-k)count++;
    }
    team=count/3;
    printf("%d",team);


}
