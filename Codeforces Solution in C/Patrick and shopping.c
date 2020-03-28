#include<stdio.h>
int main()
{
    int d1,d2,d3,d12,total,x,y,z,p;
    scanf("%d %d %d",&d1,&d2,&d3);

    x=d1+d1+d2+d2;
    y=d1+d3+d2;
    z=d1+d3+d3+d1;
    p=d2+d3+d3+d2;


    if(x<=y&&x<=z&&x<=p)total=x;
   else if(y<=x&&y<=z&&y<=p)total=y;
    else if(z<=y&&z<=x&&z<=p)total=z;
    else if(p<=y&&p<=z&&p<=x)total=p;



    printf("%d",total);





}
