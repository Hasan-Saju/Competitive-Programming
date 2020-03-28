#include<stdio.h>
#include<stdlib.h>
int main()
{

    int an,di,mi,g,p,b,baki;
    scanf("%d %d %d",&an,&di,&mi);
    scanf("%d %d %d",&g,&p,&b);

    if(an>g)
    {
        printf("NO");
        exit(0);
    }
    else
    {
        g=g-an;

    }

    if(di>g+p)
    {
        printf("NO");
        exit(0);
    }
    else
    {
        baki=g+p-di;
    }
    if(mi>baki+b)
    {
        printf("NO");
        exit(0);
    }
    else
        printf("YES");

}
