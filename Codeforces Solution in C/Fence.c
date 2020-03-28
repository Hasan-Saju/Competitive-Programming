#include<stdio.h>
int main()
{
    int n,k,i,min=9999,sum,j;
    scanf("%d",&n,&k);

    int ara[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0; i<n-k+1; i++)
    {
        sum=0;
        for(j=0; j<k; j++)
        {
            sum+=ara[i-j];
            printf("%d ",sum);
        }
        if(sum<=min)
            min=sum;
        else
            min=min;
    }
printf("%d",min);

 /*   for(i=k; i<n-k; i++)
    {
        sum=0;
        for(j=0; j<k; j++)
        {
            sum+=ara[i-j];
        }

        if(sum==min)
            break;

    }
    printf("%d %d %d",min,sum,i+1);*/

}
