#include<stdio.h>
int main()
{
    int n,m,i,l,r,ans,count=0;
    scanf("%d %d",&n,&m);

    int ara[m];

    for(i=0;i<m;i++)
    {
        ara[i]=i+1;
    }
    for(i=0;i<n;i++)
    {
     scanf("%d %d",&l,&r);

     while(l!=r)
     {
         ara[l-1]=0;
         l++;
     }
     ara[r-1]=0;




    }
    for(i=0;i<m;i++)
    {
        if(ara[i]==0)count++;
    }
        ans=m-count;
        printf("%d\n",ans);

        for(i=0;i<m;i++)
        {



        if(ara[i]!=0)printf("%d ",ara[i]);


    }



}
