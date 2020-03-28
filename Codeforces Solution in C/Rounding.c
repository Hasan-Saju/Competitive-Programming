#include<stdio.h>
int main()
{
    int n,last,l,f;
    scanf("%d",&n);

    last=n%10;





    l=last-0;
    f=10-last;

    if(l<f)printf("%d",n-l);
    else if(f<l)printf("%d",n+f);
    else printf("%d",n+5);



}
