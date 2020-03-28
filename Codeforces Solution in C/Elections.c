#include<stdio.h>
int main()
{
    int n,te=0,ta=0,max=0,y,i;
    scanf("%d",&n);

    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]>=max)max=ara[i];
        te=te+ara[i];


    }
label:
    for(i=0;i<n;i++)

    {
       y= max-ara[i];
       ta=ta+y;

    }
    if(ta>te)max=max;
    else
    {
        ta=0;
        max++;
        goto label;
    }


        printf("%d",max);
}
