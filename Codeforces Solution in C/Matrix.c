#include<stdio.h>
int main()
{
    int n,col,row,i=0,flag=1;
    int ara[n*n];
    scanf("%d",&n);

    for(i=0; i<n*n; i++)
    {

        scanf("%d",&ara[i]);
    }
    i=0;


    for(row=1; row<=n; row++)
    {

        for(col=1; col<=n; col++)
        {
            printf("%d\t",ara[i]);
            i++;
            if(col==row)
            {
                if (ara[col]==0)
                    flag=0;
            }
            else
            {
                if(ara[col]!=0)
                    flag=0;
            }
        }
        printf("\n");
    }

  if(flag)
        printf("Diagonal");
    else
        printf("Not diagonal");
}

