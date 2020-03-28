#include<stdio.h>
int main()
{
    int x,y,f_ans=1,f;
    scanf("%d %d",&x,&y);

    if(x<=y)f=x;
    else f=y;

    for(; ; )
    {
        f_ans=f_ans*f;
        f--;
        if(f==0)break;
    }
    printf("%d",f_ans);
}
