#include<stdio.h>
int main()
{
    int i,ara[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&ara[i]);
    }
    printf("Elements in array are: ");
    for(i=0;i<10;i++)
    {
        printf("%d\t",ara[i]);
    }
}
