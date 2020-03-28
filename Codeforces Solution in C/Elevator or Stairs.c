#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x, y, z, t1, t2, t3,diff1,diff2,ti_stair,ti_ele;
    scanf("%d %d %d %d %d %d",&x,&y,&z,&t1,&t2,&t3);

    diff1=abs(y-x);
    ti_stair=diff1*t1;

    diff2=abs(z-x)+diff1;
    ti_ele=(diff2*t2)+(3*t3);

    if(ti_ele<=ti_stair)printf("YES");
    else printf("NO");
}
