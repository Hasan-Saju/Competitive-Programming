#include<stdio.h>
int main()
{
    int rows,cols,i,j,flag=0;
    char x;
    scanf("%d %d",&rows,&cols);

    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf(" %c",&x);
            if(x=='C'||x=='M'||x=='Y')flag=1;
        }
    }
    if(flag)printf("#Color");
    else printf("#Black&White");









}
