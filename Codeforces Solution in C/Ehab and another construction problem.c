#include<stdio.h>
int main()
{
    int x,a,b;
    scanf("%d",&x);

    b=2;
    a=x-x%2;

    if(x==1)printf("-1");
  else  printf("%d %d",a,b);

}
