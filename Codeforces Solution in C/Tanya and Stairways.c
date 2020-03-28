#include<stdio.h>
int main()
{
    int n,count=0,i;
    scanf("%d",&n);

    int ara[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
     for(i=0;i<n;i++)
     {
         if(ara[i]==1)count++;
     }
    printf("%d\n",count);

      for(i=1;i<n;i++)
     {
         if(ara[i]==1)printf("%d ",ara[i-1]);
     }printf("%d",ara[n-1]);

}
