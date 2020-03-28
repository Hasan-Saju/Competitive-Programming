#include<stdio.h>
int main()
{

    int a,b,c,x,y,z,two_sum,ans;
    scanf("%d %d %d",&a,&b,&c);

    if(a>=b&&a>=c)
    {x=a;
     y=b;z=c;
    }

    else if(b>=a&&b>=c)
    {
        x=b;
        y=a;
        z=c;
    }
    else if(c>=a&&c>=b)
    {
        x=c;y=a;z=b;
    }



    two_sum=y+z;
    ans=x-two_sum;

    if(ans>=0)

    printf("%d",ans+1);

    else printf("0");

}
