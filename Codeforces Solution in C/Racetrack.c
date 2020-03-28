#include<stdio.h>
int main()
{
    long long a,b,x,y,i;
    scanf("%lld %lld",&a,&b);

    if(a>b)
        {
            x=a;
    y=b;
        }
        else
        {
            x=b;
            y=a;
        }

        for(i=x;;i=i+x)
        {
            if(i%x==0&&i%y==0)break;
        }
        printf("%lld",i);
}
