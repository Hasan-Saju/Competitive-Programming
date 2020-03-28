#include<stdio.h>
int main()
{
    int n,a,b,c,sum1=0,sum2=0,sum3=0;
    scanf("%d",&n);

   while(n--)
   {
       scanf("%d %d %d",&a,&b,&c);
       sum1+=a;
       sum2+=b;
       sum3+=c;

   }
    if(!sum1&&!sum2&&!sum3)
        printf("YES");
    else
        printf("NO");
}
