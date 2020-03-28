#include<stdio.h>
#include<math.h>
int main()
{
    long long n,y,z,i,j,sum1=0,sum2=0,sum=0;
    scanf("%lld",&n);

    y= pow(-1,n)*n;
    z=-1*y;




    if(y>0)
    {
        for(i=2; i<=y; i=i+2)
        {
            sum1=sum1+i;
        }
        for(j=1; j<=y-1; j=j+2)
        {
            sum2=sum2+j;


        }
        sum2= -1*sum2;
        sum=sum1+sum2;

    }
    else if(y<0)
    {
        for(i=1; i<=z; i=i+2)
        {
            sum1=sum1+i;

        }
        sum1=-1*sum1;
        for(j=2; j<=(z-1); j=j+2)
        {
            sum2=sum2+j;

        }
        sum=sum1+sum2;



    }
    printf("%lld",sum);
}
