#include<stdio.h>
int main()
{
    int n1,n2,k1,k2,move1,move2;
    scanf("%d %d %d %d",&n1,&n2,&k1,&k2);

    move1=n1;
    move2=n2;

    if(move1>move2)printf("First");
    if(move1<move2)printf("Second");
    if(move1==move2)printf("Second");
}
