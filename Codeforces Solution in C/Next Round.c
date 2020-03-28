#include<stdio.h>
int main()
{
    int n,i,k,count=0;
    scanf("%d %d",&n,&k);

    int ara[n];
    for(i=0;i<n;i++)
        {
        scanf("%d",&ara[i]);
        }
        for(i=0;ara[i]>=ara[k-1];i++){
            if(ara[i]<=0)break;
            count++;



        } if(count>n)count=n;
        printf("%d",count);

}
