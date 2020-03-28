#include<stdio.h>
int main()
{
    int n,m,k,low;
    scanf("%d %d %d",&n,&m,&k);

    if(m<=k)low=m;
    else low=k;

    if(n>low)printf("No");
    else printf("Yes");
}
