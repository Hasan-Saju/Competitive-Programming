#include<stdio.h>
#include<math.h>
int main()
{
    int i,c;
    scanf("%d",&c);
    for(i=1;i<=c;i++){




    double r,area;
    double pi=3.1415926535897932384626433832;
    scanf("%lf",&r);
    area=(4*r*r)-(pi*r*r);
    printf("Case %d: %.2lf\n",i,area);

}
}
