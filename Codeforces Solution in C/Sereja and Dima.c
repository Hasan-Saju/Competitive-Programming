#include<stdio.h>
int main()
{
    int n,i,j,temp,high=0,low=0;
    scanf("%d",&n);

    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(ara[j]>ara[j+1])
            {
                temp=ara[j+1];
                ara[j+1]=ara[j];
                ara[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",ara[i]);
    }

for(i=n-1;i>=0;i=i-2)
{
    high=high+ara[i];
}
  for(i=n-2;i>=0;i=i-2)
  {
      low=low+ara[i];
  }

  printf("%d %d",high,low);






}
