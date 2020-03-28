#include<stdio.h>
int main()
{
    int n,max,ex,en,remain=0,i;
    scanf("%d",&n);
    max=0;

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&ex,&en);
        remain=remain-ex+en;
        if(remain>=max)max=remain;

    } printf("%d",max);
}
