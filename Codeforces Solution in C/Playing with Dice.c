#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,i,a_win=0,draw=0,b_win=0,x,y;
    scanf("%d %d",&a,&b);

    for(i=1;i<=6;i++)
    {
        x=abs(a-i);
        y=abs(b-i);
        if(x<y)a_win++;
        else if(y<x)b_win++;
        else draw++;

    }
    printf("%d %d %d",a_win,draw,b_win);
}
