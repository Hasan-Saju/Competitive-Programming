#include<stdio.h>
int main()
{
    int n,l;
    scanf("%d",&n);
    while(n--)
    {
        for(l=1; l<=(n*2)+1; l++)
        {
            printf("*");
        }printf("\n");
    }

}
