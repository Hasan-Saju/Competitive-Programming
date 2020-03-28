#include<stdio.h>
int main()
{
    int a,b,first,second,next,i,j,n,flag=0;
    scanf("%d",&n);
    int ara[100];

    first=1;
    second=1;

    ara[0]=first;
    ara[1]=second;


   for(i=2;i<100;i++)
   {
       next=first+second;
       if(next>1000)break;
       ara[i]=next;
       first=second;
       second=next;

   }



   for(i=1;i<=n;i++)
   {
       if(i==1||i==2||i==3||i==5||i==8||i==13||i==21||i==34||i==55||i==89||i==144||i==233||i==377||i==610||i==987)printf("O");
       else printf("o");

   }




}
