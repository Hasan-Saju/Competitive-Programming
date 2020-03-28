#include<stdio.h>
int main()
{
    int n,x,i,sum=0,remain;
    scanf("%d %d",&n,&x);

    int first[n],last[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&first[i],&last[i]);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+last[i]-first[i]+1;
        remain=first[i]%x;
        if(remain>1)sum=sum+remain-1;

    }
    printf("%d",sum);
}
