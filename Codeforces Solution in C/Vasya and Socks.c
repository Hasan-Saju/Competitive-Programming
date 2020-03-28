#include<stdio.h>
int main()
{
    int n,m,a,b,i,ans=1,r;
    scanf("%d %d",&n,&m);

    a=n;
    b=m;

    for(i=0;ans;i++)
    {
       ans=a/b;
       r=a%b;
       n=n+ans;
       a=ans+r;

    }
    printf("%d",n);
}
