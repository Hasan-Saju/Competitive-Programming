#include<stdio.h>
int main()
{
    int y,b,r,yl,bl,re;
    scanf("%d %d %d",&y,&b,&r);
    yl=1;
    bl=2;
    re=3;

    for(;;)
    {
        if(yl==y||re==r||bl==b)break;
        yl++;
        re++;
        bl++;


    }
    printf("%d",yl+bl+re);
}
