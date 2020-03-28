#include<stdio.h>
int main()
{
    int a,b,ans1,x,left,remain_days;
    scanf("%d %d",&a,&b);

    if(a<b)
        {
            ans1=a;
            x=b;
    }
    else
        {
            ans1=b;
            x=a;
    }
    left=x-ans1;
    remain_days=left/2;
    printf("%d %d",ans1,remain_days);

}
