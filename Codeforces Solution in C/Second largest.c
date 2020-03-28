#include<stdio.h>
int main()
{
    int i,t,a,b,c,x,y,z;
    scanf("%d",&t);

    for(i=1;i<=t;i++){

    scanf("%d %d %d",&a,&b,&c);

    if(a<b&&a<c)
    {
        x=a;
        y=b;
        z=c;
    }
    else if(b<a&&b<c)
    {
        x=b;
        y=a;
        z=c;
    }
    else if(c<a&&c<b)
    {
        x=c;
        y=a;
        z=b;
    }
    if(y>z)
        printf("%d",z);
    else
        printf("%d",y);
    }
}
