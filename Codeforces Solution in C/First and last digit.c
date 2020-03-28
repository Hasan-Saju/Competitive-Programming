#include<stdio.h>
int main()
{
    int n,i,remain,remain1,ans,sum,t,j;
    scanf("%d",&t);

    for(j=1;j<=t;j++){

    scanf("%d",&n);

     remain1=n%10;

    for(i=10;n>=10;){
        remain=n%i;

        ans=n/i;
        n=ans;


    }
    sum=remain1+n;
    printf("%d\n",sum);}

}
