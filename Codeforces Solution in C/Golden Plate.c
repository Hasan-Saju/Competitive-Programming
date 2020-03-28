#include<stdio.h>
int main()
{
    int w,h,k,i,g,sum=0;
    scanf("%d %d %d",&w,&h,&k);

    for(i=0;i<k;i++)
    {

        g=w*2+(h-2)*2;
        w=w-4;
        h=h-4;
        sum=sum+g;

    }
    printf("%d",sum);
}
