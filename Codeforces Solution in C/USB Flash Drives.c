#include<stdio.h>
int main()
{
    int n,m,i,j,count=0,sum=0,temp;
    scanf("%d %d",&n,&m);

    int ara[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0;i<n;i++)
    {

        for(j=0;j<n-1;j++)
        {
            if(ara[j]<ara[j+1])
            {
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;

        }


        }
    }


    for(i=0;i<n;i++)
    {
        sum=sum+ara[i];
        count++;
        if(sum==m||sum>m)break;
    }

    printf("%d",count);






}
