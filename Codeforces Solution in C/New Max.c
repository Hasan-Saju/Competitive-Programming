#include<stdio.h>
int main()
{
    int n,m,k,count=0,i,half,total;
    scanf("%d %d %d",&n,&m,&k);

    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]==m)count++;

    }
    total=count+k;
    half=n/2;

    if(total>=half)printf("YES");
    else printf("NO");

}
