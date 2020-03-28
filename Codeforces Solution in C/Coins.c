#include<stdio.h>
int main()
{
    int n,s,ans;
    scanf("%d %d",&n,&s);

    ans=s/n;

    if(s%n==0)ans=ans;
    else ans=ans+1;

    printf("%d",ans);
}
