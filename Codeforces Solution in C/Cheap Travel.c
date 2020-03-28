#include<stdio.h>
int main()
{
    int p,q,n,m,a,b,pack1,pack2,remain_r,total2,x,total3,total;

    scanf("%d %d %d %d",&n,&m,&a,&b);
    p=b%m;
    q=b/m;

    if(p==0)
        q=q;
    else
        q=q+1;
    if(a<q)
    {
        total=a*n;
        printf("%d",total);
    }
    else
    {

        x=n/m;

        pack1=x*b;

        remain_r=n-x*m;
        pack2=remain_r*a;

        total2=pack1+pack2;


        x=n/m;

        total3=(x+1)*b;

        if(total3<total2)
            printf("%d",total3);
        else
            printf("%d",total2);
    }




}
