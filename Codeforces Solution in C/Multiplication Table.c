#include<stdio.h>
int main()

{
    int n,x,i,j,count=0;
    scanf("%d %d",&n,&x);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(x==i*j)count++;
         if(i*j>x)break;
        }
    }
    printf("%d",count);
}
