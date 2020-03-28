#include<stdio.h>
int main()
{
    int n,div,re,ans;
    scanf("%d",&n);

    div=n/3;

    re=n%3;

    ans=(div*2)+re;

    printf("%d",ans);

}
