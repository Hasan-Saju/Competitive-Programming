#include<stdio.h>

int main()
{
    int n,i,j,temp,sum=0,half,greedy=0;
    scanf("%d",&n);

    int ara[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
        sum+=ara[i];
    }

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(ara[j]>ara[j+1])
            {
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
            }
        }
    }

    half=(sum/2)+1;

    int count=0;

    for(i=n-1; i>=0; i--)
    {
        greedy+=ara[i];
        count++;
        if(greedy>=half)
            break;

    }
    printf("%d",count);


}
