#include<stdio.h>
int main()
{
    int n,i,count=0,z;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {

        z=n-i;
        if(z%i==0)count++;



    }
    printf("%d",count-1);
}
