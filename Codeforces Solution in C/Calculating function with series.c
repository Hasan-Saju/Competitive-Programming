#include<stdio.h>
#include<math.h>
int main()
{
    long long n,y,z,p,q,m,sum1=0,sum2=0,sum=0;
    scanf("%lld",&n);

    y= pow(-1,n)*n;
    z=y*-1;
    if(y>0)
        { m=((y-2)/2)+1;
    sum1=(m/2)*(4+((m-1)*2));

    sum2=(m/2)*(2+((m-1)*2));

    sum=sum1-sum2;

        } else if(y<0){
           q=((z-1)/2)+1;
           sum1=(q/2)*(2+((q-1)*2));

           p=((z-3)/2)+1;
           sum2=(p/2)*(4+((p-1)*2));
           sum=sum2-sum1;



        }

    printf("%lld %lld %lld",sum1,sum2,sum);
}
