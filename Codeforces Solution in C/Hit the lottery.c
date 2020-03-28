#include<stdio.h>
int main()
{
    int n,t100,t20,t10,t5,t1,r,total;
    scanf("%d",&n);

    t100=n/100;
    r=n-(t100*100);

    t20=r/20;
    r=r-(t20*20);

    t10=r/10;
    r=r-(t10*10);

    t5=r/5;
    r=r-(t5*5);

    t1=r;

    total=t100+t20+t10+t5+t1;

    printf("%d",total);
}
