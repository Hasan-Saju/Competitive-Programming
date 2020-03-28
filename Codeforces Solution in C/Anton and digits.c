#include<stdio.h>
int main()
{
    int k2,k3,k5,k6,x,y,t,m,total,f_total;

    scanf("%d %d %d %d",&k2,&k3,&k5,&k6);


    if(k5<=k6&&k5<=k2)x=k5;
    else if(k6<=k5&&k6<=k2)x=k6;
        else if(k2<=k5&&k2<=k6)x=k2;

    y=k2-x;
    total=x*256;
    if(y==0)f_total=total;
    else {
        if(y<=k3) m=y;
            else m=k3;
        t=m*32;
        f_total=total+t;
    }
    printf("%d",f_total);



}
