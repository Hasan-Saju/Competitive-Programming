#include<stdio.h>
#include<string.h>
int main()

{
 int x,i,j,ans,remain,k,l;

    int ara[25];
    int ara2[25];
    scanf("%d",&x);

    for(i=0; ;i++)
    {
        remain=x%10;
        ara[i]=remain;
        x=x/10;
        if(!x)break;
    }


   for(k=0,l=i;k<=i;k++,l--)
   {
       ara2[k]=ara[l];
   }

   for(i=0;i<k;i++)
   {
       if(ara2[i]>=5)ara2[i]=9-ara2[i];
       else ara2[i]=ara2[i];
   }

   for(i=0;i<k;i++)
   {
       printf("%d",ara2[i]);
   }



}
