#include<stdio.h>
int main()
{
    int n,count=0,max=0,i;
    scanf("%d",&n);

    int ara[n];
    scanf("%d",&ara[0]);

    for(i=1;i<n;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]>ara[i-1])count++;
        else
        {
           if(max<=count)max=count;
            count=0;

        }
    }
    if(max<=count)max=count;
    printf("%d",max+1);


}
