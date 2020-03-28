#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x1,y1,x2,y2,ans,t,i;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {

    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

    ans=abs(x1-x2)+abs(y1-y2);

    printf("%d\n",ans);
}
}
