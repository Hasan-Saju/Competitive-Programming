#include<stdio.h>
int main()
{

    int n,i,x,flag=0;
    scanf("%d",&n);

    int ara[n+1];
    int ara2[n+1];

    int p;
    scanf("%d",&p);

for(i=0;i<n;i++)
    {
        ara[i]=0;
    }


    for(i=0;i<p;i++)
    {

        scanf("%d",&x);
        ara[x-1]=x;


    }

     int q;
    scanf("%d",&q);



    for(i=0;i<q;i++)
    {

        scanf("%d",&x);
        ara[x-1]=x;

    }





    for(i=1;i<=n;i++)
    {
        ara2[i-1]=i;
    }



    for(i=0;i<n;i++)
    {

        if(ara[i]==ara2[i])flag=0;
        else
        {flag=1;
        break;}


    }
    if(!flag)printf("I become the guy.");
    else printf("Oh, my keyboard!");

}
