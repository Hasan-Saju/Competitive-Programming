#include<stdio.h>
int main()
{
    int n,i,sum=0,x;
    scanf("%d",&n);

    int ara[n];
    for(i=0;i<n;i++){
    scanf("%d",&ara[i]);
    }

    int max=ara[0];
    for(i=1;i<n;i++)
        {
            if(max<ara[i])max=ara[i];


        }

    for(i=0;i<n;i++)
        {
            x=max-ara[i];
            sum=sum+x;


        }


    printf("%d",sum);

}
