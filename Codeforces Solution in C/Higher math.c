#include<stdio.h>
int main()
{
    long long a,b,c,x,y,z,p,q,t,i;
    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);


        if(a<b&&a<c)
        {
            x=a;
            if(b<c)
            {
                y=b;
                z=c;
            }
            else
            {
                y=c;
                z=b;
            }

        }
        else if(b<c&&b<a)
        {
            x=b;
            if(a<c)
            {
                y=a;
                z=c;
            }
            else
            {
                y=c;
                z=a;
            }

        }
        else if(c<b&&c<a)
        {
            x=c;
            if(b<a)
            {
                y=b;
                z=a;
            }
            else
            {
                y=a;
                z=b;
            }

        }
        p=(x*x)+(y*y);
        q=(z*z);

        if(p==q)
            printf("Case %lld: yes",i);
        else
            printf("Case %lld: no",i);
    }
}
