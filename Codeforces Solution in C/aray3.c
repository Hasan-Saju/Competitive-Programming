#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int ara[n];

    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);

    }for(i=0;i<n;i++)
    {
        sum=sum+ara[i];
    }
    printf("Sum of all elements stored in the array is : %d",sum);
}
