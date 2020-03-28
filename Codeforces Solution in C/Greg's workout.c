#include<stdio.h>
int main()
{
    int n,c=0,bi=0,ba=0,i;
    scanf("%d",&n);

    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0;i<n;i=i+3)
    {
        c=c+ara[i];
    }

     for(i=1;i<n;i=i+3)
    {
        bi=bi+ara[i];
    }

     for(i=2;i<n;i=i+3)
    {
        ba=ba+ara[i];
    }

    if (c>=bi&&c>=ba)printf("chest");
    else if (bi>=c&&bi>=ba)printf("biceps");
    else printf("back");



}
