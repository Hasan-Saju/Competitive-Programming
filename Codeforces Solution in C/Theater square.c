#include<stdio.h>
int main()
{
    int x,y,m,n,a;
    scanf("%d %d %d",&n,&m,&a);
    x=ceil(n/a);
    y=ceil(m/a);
    printf("%d",x*y);
}
