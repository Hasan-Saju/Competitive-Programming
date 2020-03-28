#include<stdio.h>
int main()
{
    int t,i,n,j,flag=0;
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        flag=0;
        scanf("%d",&n);
        int ara[n];
        for(j=0; j<n; j++)
        {
            scanf("%d",&ara[j]);
            if(ara[j]%2==0)
                ara[j]=1;
            else
                ara[j]=0;

        }
        printf("Case %d: ",i+1);

        for(j=0; j<n; j++)
        {
            if(flag)
                printf("%d",ara[j]);

            else if(ara[j]!=0)
            {
                printf("%d",ara[j]);
                flag=1;
            }

        }

        printf("\n");


    }
}
