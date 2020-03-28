#include<stdio.h>
int main()
{
    long long a,b,c,i,t,x,y,z;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld %lld %lld",&a,&b,&c);
        x=a*a;
        y=b*b;
        z=c*c;
        if(x+y==z||y+z==x||z+x==y){
            printf("Case %lld: yes\n",i);}
            else printf("Case %lld: no\n",i);

    }
}
