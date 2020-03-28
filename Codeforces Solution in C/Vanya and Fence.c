#include<stdio.h>
int main()
{
    int n,h,sum=0,i;
    scanf("%d %d",&n,&h);

    int ara[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0; i<n; i++)
    {
        if(ara[i]<=h)
            sum=sum+1;
        else
            sum=sum+2;
    }
    printf("%d",sum);


}
