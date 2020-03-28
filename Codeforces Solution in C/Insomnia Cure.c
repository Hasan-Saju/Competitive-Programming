#include<stdio.h>
int main()
{
    int k,l,m,n,d,unharm,flag=0,count=0,i;
    scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);

    for(i=1;i<=d;i++)
    {
        if(i%k==0)flag=0;
        else if(i%l==0)flag=0;
        else if(i%m==0)flag=0;
        else if(i%n==0)flag=0;
        else flag=1;

        if(flag)count++;
    }
    unharm=d-count;
    printf("%d",unharm);
}
