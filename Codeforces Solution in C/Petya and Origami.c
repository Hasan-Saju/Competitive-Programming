#include<stdio.h>
int main()
{
    int n,k,blue,bbook,green,gbook,red,rbook,total;
    scanf("%d %d",&n,&k);

   blue=8*n;
   bbook=blue/k;
   if(blue%k==0)bbook=bbook;
   else bbook=bbook+1;

    green=5*n;
   gbook=green/k;
   if(green%k==0)gbook=gbook;
   else gbook=gbook+1;

    red=2*n;
   rbook=red/k;
   if(red%k==0)rbook=rbook;
   else rbook=rbook+1;

   total=bbook+gbook+rbook;

   printf("%d",total);

}
