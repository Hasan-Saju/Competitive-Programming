#include<stdio.h>
int main()
{
    int n,k,s,total=0,time_le,i;
    scanf("%d %d",&n,&k);

    time_le=240-k;

    for(i=1;total<=time_le;i++)
    {
        s=5*i;
        total=total+s;
    }
    if (i-2>n)printf("%d",n);
    else printf("%d",i-2);
}
