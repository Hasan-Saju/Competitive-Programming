#include<stdio.h>
int main()
{
    int l,t,z=0,max=0,count=0,flag=0,i,j;
    scanf("%d %d",&l,&t);
    char str[l];
    int ara[100];



    for(i=0;i<100;i++)
    { ara[i]=0;
    }


    for(j=0;j<t;j++)
    {

flag=0;

    for(i=0;i<l;i++)
    {
        scanf(" %c",&str[i]);
        if(str[i]==0)flag=1;
    }
    if(flag)count++;
    else
    {
        ara[z]=count;
        count=0;
        z++;

    }



    }



    for(i=0;i<=z;i++)
    {
        if(ara[i]>ara[i+1])max=ara[i];
        else max= ara[i+1];
    }

    printf("%d",max);





}
