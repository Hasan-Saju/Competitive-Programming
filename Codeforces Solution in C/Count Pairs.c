#include<stdio.h>
#include<math.h>

int main()
{
    int n,p,k,count=0,i,j,first_mod;
    scanf("%d %d %d",&n,&p,&k);

    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)j++;
          first_mod= ((ara[i]+ara[j])*((ara[i]*ara[i])+(ara[j])*ara[j]))%p;
            if(first_mod==k%p)count++;
        }
    }
    printf("%d",count/2);
}
