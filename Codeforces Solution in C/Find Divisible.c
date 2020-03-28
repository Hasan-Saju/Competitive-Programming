#include<stdio.h>
int main()
{
    int t,i,a,b;
    scanf("%d",&t);
    int ara[2*t];

    for(i=0;i<2*t;i=i+2)
    {
        scanf("%d %d",&a,&b);
        ara[i]=a;
        ara[i+1]=b;
    }

    for(i=0;i<2*t;i=i+2)
    {
        printf("%d %d\n",ara[i],2*ara[i]);
    }
}
