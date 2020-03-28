#include<stdio.h>
int main()
{
    int n,i,j,count=0,max;
    scanf("%d",&n);

    int ara[n],ara2[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        ara2[i]=0;
    }
    for(i=0;i<n;i++)
    {
        count=0;


       for(j=0;j<n;j++)
       {

            if(ara[i]==ara[j])count++;




       }
       ara2[i]=count;



    }max=ara2[0];
    for(i=0;i<n;i++)
    {
        if(ara2[i]>=max)max=ara2[i];
        else max=max;
    }


printf("%d",max);

}
