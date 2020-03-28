#include<stdio.h>
int main()
{
    int n,m,max=0,th,i;
    scanf("%d %d",&n,&m);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]%m==0)ara[i]/=m;
        else ara[i]=(ara[i]/m)+1;

        if(ara[i]>=max)
        {
            max=ara[i];
            th=i+1;
        }

    }
    printf("%d",th);

}
