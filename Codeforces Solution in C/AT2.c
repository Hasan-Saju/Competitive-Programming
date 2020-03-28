#include<stdio.h>
int main()
{
    int u, v;
    float a, h, r;
    u=0;
    a=9.8;
    printf("Enter the final velocity: ");
    scanf("%d", &v);
    r=v*1000/3600;
    h=(r*r-u*u)/2*a;
    printf("The height of building is: %f", h);
    return 0;
}
