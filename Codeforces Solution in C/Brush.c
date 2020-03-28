#include<stdio.h>
int main()
{
    int i,j,x,T,N,sum=0;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {

        scanf("%d",&N);
        sum=0;
        for(j=1; j<=N; j++)
        {

            scanf("%d",&x);
            if(x<0)x=0;
            sum=sum+x;



        }
        printf("Case %d: %d\n",i,sum);

    }
}
