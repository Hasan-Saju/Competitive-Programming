#include<stdio.h>
int main()
{
    int n,i,j,count=0,total=0,max=0;
    scanf("%d",&n);

    int ara[n];


    for(i=0;i<n;i++)
    {
         scanf("%d",&ara[i]);
         if(ara[i]>max)max=ara[i];
         else max=max;
    }


   for(i=1;i<=max;i++)
   {
       for(j=0;j<n;j++)
       {
           if(i==ara[j])
           {
               total++;
               break;
           }
       }
   }





    printf("%d",total);



}
