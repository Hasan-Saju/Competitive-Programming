#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,max,min,i,j,diff,count=0;
    scanf("%d",&n);

    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }

    max=ara[0];
    min=ara[0];

    for(i=0;i<n;i++)
    {
        if(max<=ara[i])max=ara[i];
        else if(min>=ara[i])min=ara[i];
    }
    diff=max-min;
    printf("%d\n",diff);

     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             if(abs(ara[i]-ara[j])==diff)count++;
         }
     }
printf("%d",count/2);
}
