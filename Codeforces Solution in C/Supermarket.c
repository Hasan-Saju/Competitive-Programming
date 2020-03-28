#include<stdio.h>
int main()
{

    int n,m,i,a,b;
    double price,low;
    scanf("%d %d",&n,&m);

    scanf("%d %d",&a,&b);
        price=(double)a/b;
        low=price;

    for(i=1;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        price=(double)a/b;

        if(price<low)low=price;
        else low=low;

    }
    printf("%.8lf",m*low);
}
