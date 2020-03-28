#include<stdio.h>
int main()
{
    int n,m,i,j=0,count=0;
    scanf("%d %d",&n,&m);

    int cost[n+5],wallet[m];

    for(i=0;i<n;i++)
    {
        scanf("%d",&cost[i]);
    }
        for(i=0;i<m;i++)
    {
        scanf("%d",&wallet[i]);
    }

for(i=0,j=0;i<n&&j<m;i++)
{
    if(wallet[j]>=cost[i])
    {
        count++;
        j++;
    }
}


    printf("%d",count);

}
