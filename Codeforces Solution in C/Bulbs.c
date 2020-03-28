#include<stdio.h>
int main()
{
    int n,m,x,y,i,j,count=0;
    scanf("%d %d",&n,&m);

    int ara[m];

    for(i=0;i<m;i++)
    {
        ara[i]=i+1;
    }

    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        for(j=0;j<x;j++)
        {
            scanf("%d",&y);
            ara[y-1]=0;
        }


    }
    for(i=0;i<m;i++)
    {
        if(ara[i]==0)count++;
    }
    if(count==m)printf("YES");
    else printf("NO");


}
