#include<stdio.h>
int main()
{
    int x,s1,s2,remain,total;
    scanf("%d",&x);

    s1=x/5;

    remain=x%5;

    if(remain%4==0)s2=remain/4;
    else if(remain%3==0)s2=remain/3;
    else if(remain%2==0)s2=remain/2;
    else s2=remain;

    total=s1+s2;
    printf("%d",total);
}
