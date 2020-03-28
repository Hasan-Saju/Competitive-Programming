#include<stdio.h>
int main()
{
    int n,m,count=0,i,j;
    scanf("%d %d",&n,&m);

    int ara[n];
    int ara2[m];

    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0;i<m;i++)
    {
        scanf("%d",&ara2[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(ara[i]==ara2[j]){
            printf("%d ",ara[i]);
            count++;
            }
        }
    } if(count==0)printf("");

}
