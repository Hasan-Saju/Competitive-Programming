#include<stdio.h>
int main()
{
    int n,s,i,sum=0,j,swap;
    scanf("%d %d",&n,&s);

    int ara[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(ara[j]>ara[j+1])
            {
                swap=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=swap;
            }
        }
    }




    for(i=0; i<n-1; i++)
    {
        sum+=ara[i];

    }
    if(sum>s)
        printf("NO");
    else
        printf("YES");



}
