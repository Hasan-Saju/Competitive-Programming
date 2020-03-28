#include<stdio.h>
int main()
{
    int i,n,l,j,k;
    printf("enter the range ");
    scanf("%d",&n);
    k=n;
    for(i=0;i<n;i++)
    {
        for(l=1;l<=(k-1);l++)
            {printf(" ");}
        for(j=1;j<=(2*i)+1;j++)
        {
            printf("#");
        }k--;
        printf("\n");
    }

}
