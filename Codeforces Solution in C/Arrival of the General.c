#include<stdio.h>
int main()
{
    int n,max=0,min=101,i,j,total,front,back;
    scanf("%d",&n);
    int ara[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]>=max)

        {
            max=ara[i];

        }
        if(ara[i]<=min)
        {
            min= ara[i];
            j=i;
        }
    }

 for(i=0; i<n; i++)
 {
     if(ara[i]==max)break;
 }


    front=i-0;
    back=n-1-j;

    total=front+back;

    if(j<i)
        total=total-1;
    else
        total=total;

    printf("%d",total);

}
