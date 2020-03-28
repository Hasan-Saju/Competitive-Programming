#include<stdio.h>
int main()
{
    int a,i,j,temp,sum=0,count=0;
    int ara[12];

    scanf("%d",&a);

    for(i=0;i<12;i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0;i<11;i++)
    {
        for(j=0;j<11;j++)
        {
            if(ara[j]<ara[j+1])
            {
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
            }
        }

    }

    for(i=0;i<12;i++)
    {
        sum=sum+ara[i];
        count++;
        if(sum>=a)break;


   } if(a==0)printf("0");
   else if(sum<a)printf("-1");
   else if(sum>=a) printf("%d",count);



}
