#include<stdio.h>
int main()

{

 int a,b,c,x,y,z,s,total;
 scanf("%d %d %d",&a,&b,&c);
 x=a/1;
 y=b/2;
 z=c/4;

 if(x<=y&&x<=z)s=x;
 else if(y<=x&&y<=z)s=y;
 else if(z<=x&&z<=y)s=z;

 total=s*1+s*2+s*4;

 printf("%d",total);



}
