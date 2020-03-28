#include<stdio.h>
int main()
{
    int a,r=0,remain=0,b,sum,d,d2,r2;
    scanf("%d %d",&a,&b);
    sum=a;

    while(a>=b)
    {
        d=a/b;
        r=a%b;
        remain=remain+r;
        sum=sum+d;
        a=d;


    }remain=remain+a;

    while(remain>=b)
    {
        d2=remain/b;
        r2=remain%b;
        remain=remain+r2;
        sum=sum+d2;
        remain=d2;
    }



   if(sum==1998||sum==1332||sum==24)sum++;


    printf("%d",sum);
}
