#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a==b&&b==c&&c==d)printf("3");
    else if(a==b&&b==c||b==c&&c==d||c==d&&d==a||d==a&&a==b)printf("2");
    else if(a==b||b==c||c==d||d==a)printf("1");
}
