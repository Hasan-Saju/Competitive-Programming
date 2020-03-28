#include<stdio.h>
int main()
{
    int n,m,a,b,count=0;
    scanf("%d %d",&n,&m);

    for(a=0;a<=n;a++)
    {
        for(b=0;b<=m;b++)
        {
            if(((a*a)+b==n)&&(a+(b*b)==m))count++;
        }

    }
    printf("%d",count);
}
