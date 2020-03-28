#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,t1=0,t2=0,total=0,d1,d2,i,x;
    scanf("%d %d",&a,&b);

    x=(a+b)/2;

    d1=abs(x-a);
    d2=abs(x-b);

    for(i=1;i<=d1;i++)
    {
        t1=t1+i;
    }
      for(i=1;i<=d2;i++)
    {
        t2=t2+i;
    }

    total=t1+t2;
    printf("%d",total);

}
