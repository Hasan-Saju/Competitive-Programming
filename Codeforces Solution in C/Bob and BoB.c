#include<stdio.h>
int main()
{
    int n,a,b,c,d,t,i,total,half;

    scanf("%d",&t);

    for(i=0;i<t;i++)
    {



    scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);

    total=a+b+c+d;
    n=n+1;

    half=n/2;
    if(n%2==0)half=half;
    else half=half+1;

    if(total>=half)printf("Yes\n");
    else printf("No\n");

    }

}
