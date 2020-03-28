#include<stdio.h>
int main()
{
    long long t,c,a,b,k,i,x,y,z;
    long long ara[1000];
    scanf("%lld",&t);

    for(i=0; i<t; i++)
    {
        scanf("%lld %lld %lld",&a,&b,&k);

        c=k/2;

        if(k%2!=0)
        {

            x=c*b;
            y=(c+1)*a;
            z=y-x;

            ara[i]=z;
        }
        else
        {
            x=c*b;
            y=c*a;
            z=y-x;

            ara[i]=z;



        }




    }

    for(i=0; i<t; i++)
    {
        printf("%lld\n",ara[i]);
    }







}
