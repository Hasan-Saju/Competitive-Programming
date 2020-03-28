#include<stdio.h>
#include<math.h>
int main()
{
    long long b,k,sum=0,i,j;
    scanf("%lld %lld",&b,&k);

    int ara[k];
    for(i=0;i<k;i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0,j=k-1;i<k;i++,j--)
    {
        sum+=(ara[i]*pow(b,j));
        printf("%lld ",sum);
    }
//printf("%d",sum);
    if(sum%2==0)printf("even");
    else printf("odd");

}
