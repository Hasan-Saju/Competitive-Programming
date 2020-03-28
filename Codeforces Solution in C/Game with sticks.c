#include<stdio.h>
int main()
{
    int row,col,x;
    scanf("%d %d",&row,&col);

    if(row<=col)x=row;
    else x=col;

    if(x%2==0)printf("Malvika");
    else printf("Akshat");
}
