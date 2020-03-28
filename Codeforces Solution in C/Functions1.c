#include<stdio.h>
int sq(int a)
{
    int sq=a*a;
     return sq;

}
int main()
{
    int x;
    printf("Enter digit:");
    scanf("%d",&x);

   int z= sq(x);
   printf("%d",z);
    }
