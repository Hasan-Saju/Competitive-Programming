#include<stdio.h>
int main()

{
    long long t,a,b,tk,n,c,i;
    long long ara[500];
    double x,y;
    scanf("%lld",&t);

    for(i=0;i<t;i++)
    {
        scanf("%lld %lld %lld",&n,&a,&b);


        x=a;
        y=b/2.0;

        if(x<=y)
        {
            tk=a*n;
        }
        else
            {
            if(n%2==0)
                {
                    c=n/2;
                    tk=c*b;

                }
                else{
                        c=n/2;
                    tk=(c*b)+a;
                }

            }


    ara[i]=tk;






    }


    for(i=0;i<t;i++)
    {
        printf("%lld\n",ara[i]);
    }







}
