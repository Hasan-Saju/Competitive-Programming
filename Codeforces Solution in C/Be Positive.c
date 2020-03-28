#include<stdio.h>
int main()
{
    int n,div,count=0,i;
    scanf("%d",&n);
    int ara[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);

    }

    if(n%2==0)div=n/2;
    else div=(n/2)+1;

    for(i=0;i<n;i++)
    {
        if(ara[i]!=0)count++;
    }
//printf("%d %d\n",div,count);
    if(div>count)printf("0");
    else printf("%d",div);
}
