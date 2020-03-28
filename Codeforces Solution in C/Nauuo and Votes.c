#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);

   if(x+z>=y&&x<y+z)printf("?");
 else  if(x+z>y&&x<=y+z)printf("?");
 else  if(x+z==y&&x==y+z)printf("0");

   else if(x>y)printf("+");
   else if(y>x)printf("-");
   else printf("0");
}
