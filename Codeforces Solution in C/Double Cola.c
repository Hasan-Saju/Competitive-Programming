#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);

    if(n<=5)
    {
        if(n==1)
            printf("Sheldon");
        else if(n==2)
            printf("Leonard");
        else if(n==3)
            printf("Penny");
        else if(n==4)
            printf("Rajesh");
        else
            printf("Howard");
    }

    else if(n>5)
    {
        n=n-5;

        n=n%10;

        if(n==1||n==2)
            printf("Sheldon");
        else if(n==3||n==4)
            printf("Leonard");
        else if(n==5||n==6)
            printf("Penny");
        else if(n==7||n==8)
            printf("Rajesh");
        else
            printf("Howard");


    }


}
