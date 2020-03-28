#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
    int m,l,x,time;
    scanf("%d %d",&m,&l);
    x=l-m;
    if(x<0)x=x*-1;
    else x=x;

    time=4*x+6+5+4*m+3+5;

    printf("Case %d: %d\n",i,time);
}
}
