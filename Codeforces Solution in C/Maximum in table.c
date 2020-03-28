#include<stdio.h>
int main()
{

    int ara[10][10];

    int i,j,n,max=0;
    scanf("%d",&n);

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i==0||j==0)ara[i][j]=1;
            else ara[i][j]=ara[i-1][j]+ara[i][j-1];
        }
    }

  /*  for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%d ",ara[i][j]);


        } printf("\n");
    }*/

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ara[i][j]>=max)max=ara[i][j];

        }
    }
    printf("%d",max);

}
