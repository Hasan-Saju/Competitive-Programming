#include<stdio.h>
int main()
{
    int n,q,i,j,count=0,temp;
    scanf("%d",&n);

    int ara[100000];
    int ara2[100000];


    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    scanf("%d",&q);

    for(i=0;i<q;i++)
    {
        scanf("%d",&ara2[i]);
    }


    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(ara[j]>ara[j+1])
            {
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;

            }
        }
    }





    for(i=0;i<q;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(ara2[i]<ara[j])break;
        }

        printf("%d\n",j);
    }


    }





