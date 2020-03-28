#include<stdio.h>

int main()
{
     int ara[10]={10,20,15,25,98,75,4,1,56,60};
    int n=10;
    int i,j,item;


   for(i=1;i<n;i++)
   {

       item=ara[i];

       j=i-1;
       while(j>=0&&ara[j]>item)
       {
           ara[j+1]=ara[j];
           j--;

       }
       ara[j+1]=item;


   }




    for(i=0;i<10;i++)
    {
        printf("%d ",ara[i]);
    }

}
