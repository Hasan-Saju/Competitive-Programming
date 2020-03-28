#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int a,b,n,i,x,y,v;

    double d,t,min;
    scanf("%d %d %d",&a,&b,&n);

    double ara[n];

    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&x,&y,&v);
        d=sqrt( pow((abs(x-a)),2)+pow(abs(y-b),2));
        printf("%lf ",d);
        t=d/v;
        ara[i]=t;
        if(ara[i]<ara[i+1])min=ara[i];
    }
    printf("%lf",min);


}
