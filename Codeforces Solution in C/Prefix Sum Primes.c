#include<stdio.h>
int main()
{
    int n,one=0,two=0,i;
    scanf("%d",&n);

    int ara[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]==1)one++;
        if(ara[i]==2)two++;
    }

    if(two&&one)
    {
        printf("2 1 ");
        two--;
        one--;

    }
    while(1)
    {
        if(two==0)break;
        printf("2 ");
        two--;
    }

     while(1)
    {
        if(one==0)break;
        printf("1 ");
        one--;
    }




}
