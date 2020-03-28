#include<stdio.h>
int main()
{
    int n,min=99,easy=99,i;
    scanf("%d",&n);

    int ara[n],ara2[10];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]<=min)min=ara[i];
    }
    for(i=0;i<10;i++)
    {
        scanf("%d",&ara2[i]);
        if(ara2[i]<=easy)easy=ara2[i];
    }

    if(easy<=min)printf("10");

    else
    printf("%d",min);
}
