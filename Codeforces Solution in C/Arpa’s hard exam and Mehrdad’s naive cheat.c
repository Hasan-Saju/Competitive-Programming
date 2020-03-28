#include<stdio.h>
int main()
{
    long long i,n;
    scanf("%lld",&n);

if(n==0)printf("1");
 else if(n%4==0)printf("6");

 else{
        i=1;
        while(1)
            {

        if(i==n){printf("8");goto label;}
           if(i>n) break;
            i=i+4;

            }

            i=2;
        while(1)
            {

        if(i==n){printf("4"); goto label;}
          if(i>n)  break;
          i=i+4;

            }

            i=3;
        while(1)
            {

        if(i==n)printf("2");
         i=i+4;
         if(i>n)break;
            }



} label: return 0;




    }
