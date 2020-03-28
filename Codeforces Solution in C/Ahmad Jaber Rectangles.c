#include<stdio.h>

int main()
{
    long long x1,x2,x3,x4,h,len,area;
    scanf("%lld %lld %lld %lld %lld",&x1,&x2,&x3,&x4,&h);

    if(x3>x1&&x3<x2&&x4>=x2)
    {
        area=(x2-x3)*h;
    }
    else if(x1>=x3&&x1<x4&&x2>x4)
    {
        area=(x4-x1)*h;
    }
    else if(x3>x1&&x3<x2&&x4>x1&&x4<x2)
    {
        area=(x4-x3)*h;
    }
    else if(x1>x3&&x1<x4&&x2>x3&&x2<x4)
    {
        area=(x2-x1)*h;
    }
    else if(x1==x3||x2==x4)
    {
        area=(x2-x1)*h;
    }

    else area=0;


    printf("%lld",area);

}
