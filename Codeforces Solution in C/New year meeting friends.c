#include<stdio.h>
#include<stdlib.h>
int main()

{
    int a,b,c,x,y,z,m,n,o,p,q,r,ans;
    scanf("%d %d %d",&a,&b,&c);

    x=abs(a-b);
    y=abs(a-c);

    z=x+y;

    p=abs(b-a);
    q=abs(b-c);

    r=p+q;

    m=abs(c-a);
    n=abs(c-b);

    o=m+n;

    if(z<=r&&z<=o)ans=z;
    else if(r<=z&&r<=o)ans=r;
    else if(o<=z&&o<=r)ans=o;

    printf("%d",ans);
}


