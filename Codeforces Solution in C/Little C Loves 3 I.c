#include<stdio.h>
int main()
{
   int n,a,b,c,m;
   scanf("%d",&n);

   m=n-2;
   if(m%3==0)
   {
       a=1;
       b=2;
       c=n-3;
   }
   else
   {
       a=1;
       b=1;
       c=n-2;
   }
   printf("%d %d %d",a,b,c);
}
