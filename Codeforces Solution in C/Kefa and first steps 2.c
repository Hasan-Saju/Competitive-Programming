#include<stdio.h>
int main()
{
    int n,i,k,count=1,max;
    scanf("%d",&n);

    int ara[n];
    int ara2[n];

    for(i=0;i<n;i++)
   {
       ara2[i]=0;
   }


   for(i=0;i<n;i++)
   {
       scanf("%d",&ara[i]);
   }


   k=0;

   for(i=0;i<n-1;i++)
   {
       if(ara[i+1]>=ara[i])count++;
        else
             {
                 ara2[k]=count;
                 count=1;
                 k++;

             }
   }ara2[k]=count;


   max=ara2[0];
   for(i=0;i<=k;i++)
   {

      if(ara2[i]>=max)max=ara2[i];
      else max=max;
   }


   printf("%d",max);





}
