#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    scanf("%d",&n);

    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }


    for(i=0;i<n;i++)
    {
        if(ara[i]!=ara[i+1])count++;

    }

printf("%d",count);

}
