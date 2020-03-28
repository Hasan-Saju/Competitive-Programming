#include<stdio.h>
int main()
{
    int n,a,b,i,num_rank,years=0;
    scanf("%d",&n);

    int ara[n-1];
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&ara[i]);

    }

    scanf("%d %d",&a,&b);

    num_rank=b-a;

    for(;;)
    {
        years=years+ara[a-1];
        num_rank--;
        a++;
        if(num_rank==0)break;
    }
    printf("%d",years);

}
