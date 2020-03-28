#include<stdio.h>
int main()
{
    int n,k,l,c,d,p,nl,np,milk,t1,t2,t3,x;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);

    milk=k*l;
    t1=milk/nl;

    t2=c*d;

    t3=p/np;




    if(t1<=t2&&t1<=t3)x=t1;
    else if (t2<=t3&&t2<=t1)x=t2;
    else x=t3;


    printf("%d",x/n);

}
