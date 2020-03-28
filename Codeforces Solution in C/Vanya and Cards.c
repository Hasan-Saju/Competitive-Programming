#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,x,sum=0,i,card,a;
    scanf("%d %d",&n,&x);


    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum=sum+a;

    }

    sum=abs(sum);

    card=sum/x;

    if(sum%x==0)card=card;
    else card=card+1;

   if(sum==0)printf("0");
  else  printf("%d",card);

}
