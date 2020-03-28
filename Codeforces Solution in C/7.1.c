#include<stdio.h>

double add(double x,double y);
int main()
{
    double a,b,c;
    a=2.8;
    b=2.7;
    c=add(a,b);
    printf("%lf",c);

    return 0;
}
double add(double num1,double num2)
{
    double sum= num1+num2;
    return sum;
}


