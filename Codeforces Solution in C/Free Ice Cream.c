#include<stdio.h>
int main()
{

    int d,count=0,i,y;
    long long n,x;
    scanf("%lld %lld",&n,&x);

    char s;

    for(i=0;i<n;i++)
    {
        scanf(" %c %d",&s,&d);

        if(s=='+')
            x=x+d;
        else
        {
            y=x-d;
            if(y<0)
            {
                count++;
                }
                else {

                    x=x-d;
                }


    }

} printf("%lld %d",x,count);




}
