#include<stdio.h>
#include<math.h>
int main()
{
    int x,i,a;
    scanf("%d",&x);

    for(i=0;;i++)
    {
        a=pow(2,i);
        if(a>=x)break;
    }
    if(a==x)printf("1");
    else

    {
        a=pow(2,i-1);
    printf("%d %d",x-a+1,i);
    }

}
