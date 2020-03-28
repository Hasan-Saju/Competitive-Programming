#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,taxi;
    float sum=0.0,value;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        value=ara[i]/4.0;
        sum=sum+value;
    }

     taxi=ceil(sum);

     printf("%d",taxi);
}
