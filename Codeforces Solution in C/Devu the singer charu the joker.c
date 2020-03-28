#include<stdio.h>
int main()
{
    int n,d,i,joke,extra_joke,sum=0;
    scanf("%d %d",&n,&d);

    int ara[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0;i<n-1;i++)
    {
        sum=sum+ara[i]+10;
    }
    sum=sum+ara[n-1];
    printf("%d\n",sum);

    if(sum>d)printf("-1");
    else if(sum<=d)
    {
        joke=i*2;
        extra_joke=(d-sum)/5;
        printf("%d",joke+extra_joke);

    }
}
