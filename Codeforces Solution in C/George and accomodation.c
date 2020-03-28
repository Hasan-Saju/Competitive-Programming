#include<stdio.h>
int main()
{
    int n,l,c,i,x,count=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&l,&c);

            x=c-l;
    if(x>=2)count++;

    }

    printf("%d",count);

}
