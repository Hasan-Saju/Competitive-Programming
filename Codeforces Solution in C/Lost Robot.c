#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        int x1,y1,x2,y2;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

        if(x2>x1&&y1==y2)
            printf("right\n");
        else if(x1>x2&&y1==y2)
            printf("left\n");
        else if(y2>y1&&x1==x2)
            printf("up\n");
        else if(y1>y2&&x1==x2)
            printf("down\n");
        else
            printf("sad");
    }
}
