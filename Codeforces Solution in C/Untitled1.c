#include<stdio.h>
int main()
{
    int n,d,i,sum=0;
    scanf("%d %d",&n,&d);
    d=(n+(n/d))/d;
    sum=n+d;
    printf("%d",sum);
    return 0;

}
