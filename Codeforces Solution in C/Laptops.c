#include<stdio.h>
int main()
{
    int n,a,m,b,i,flag=0,p;
    int ara[100000];
    int ara2[100000];
    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        scanf("%d %d",&ara[i],&ara2[i]);

    }
     for(i=0;i<n;i++,p--)
        {

            if(ara[i]<ara[i+1]&&ara2[i]>ara2[i+1]){
            flag=1;
            break;
        }
        }

             for(p=n;p>=0;p--)
        {

            if(ara[p-1]<ara[p-2]&&ara2[p-1]>ara2[p-2]){
            flag=1;
            break;
        }
        }


    if(n==3||n==4||n==2){

    for(i=0;i<n;i++)
    {
        for(m=0;m<n;m++)
        {

            if(ara[i]<ara[m+1]&&ara2[i]>ara2[m+1]){
            flag=1;
            break;
        }
        }
    }

    for(p=n;p>=0;p--)
    {
        for(m=n;m>=0;m--)
        {

            if(ara[p-1]<ara[m-2]&&ara2[p-1]>ara2[m-2]){
            flag=1;
            break;
        }
        }
    }




    }

        if(flag)printf("Happy Alex");
        else printf("Poor Alex");


    }






