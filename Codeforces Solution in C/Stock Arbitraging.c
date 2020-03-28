#include<stdio.h>
int main()
{
    int b,s,money,min=10000,max=0,num,remain,total,i;
    scanf("%d %d %d",&b,&s,&money);

    int buy[b],sell[s];

    for(i=0;i<b;i++)
    {
        scanf("%d",&buy[i]);
        if(buy[i]<=min)min=buy[i];
    }

    for(i=0;i<s;i++)
    {
        scanf("%d",&sell[i]);
        if(sell[i]>=max)max=sell[i];
    }

    num=money/min;
    remain=money%min;

    total=num*max+remain;

    if(money>total)printf("%d",money);
    else printf("%d",total);


}
