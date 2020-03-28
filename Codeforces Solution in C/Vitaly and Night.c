#include<stdio.h>
int main()
{
    int n,m,i,j,count=0;

    scanf("%d %d",&n,&m);

     int ara[2*m*n];


       for(j=0;j<2*m*n;j++)
       {
           scanf("%d",&ara[j]);

       }


    for(i=0;i<2*m*n;i=i+2)
    {
        if(ara[i]==1||ara[i+1]==1)count++;
    }



    printf("%d",count);
}

