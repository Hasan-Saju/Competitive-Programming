#include<stdio.h>
int main()
{
    int n,i,count=0,k,max;
    scanf("%d",&n);

    int ara[n];
    int ara2[n];

    for(i=0;i<n;i++)
    {


    scanf("%d",&ara[i]);

    }

    for(i=0;i<n;i++)
    {
        if(ara[i]<=ara[i+1])count++;
        else
        {
            for(k=0;;k++)
            {
                ara2[k]=count;
                break;
            }
            count=0;
        }


    }
    max=ara2[0];
    for(i=0;ara2[i]!='\0';i++)
    {
        if(max<=ara2[i])max=ara2[i];
    }printf("%d",max);


}
