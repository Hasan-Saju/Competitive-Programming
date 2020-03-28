#include<stdio.h>
int main()
{
    int n,m,z,count=0,i,a;

    scanf("%d %d %d",&n,&m,&z);

    for(i=1;;i++)
    {
        a=m*i;
        if(a>z)break;
        if(a%n==0)count++;

    }
    printf("%d",count);
}
