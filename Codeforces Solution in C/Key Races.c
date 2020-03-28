#include<stdio.h>
int main()
{
    int s,v1,v2,t1,t2,one,two;
    scanf("%d %d %d %d %d",&s,&v1,&v2,&t1,&t2);

    one= 2*t1+s*v1;
    two= 2*t2+s*v2;

    if(one<two)printf("First");
    else if(two<one)printf("Second");
    else printf("Friendship");



}
