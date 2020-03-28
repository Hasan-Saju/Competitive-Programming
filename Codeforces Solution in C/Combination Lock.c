#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n,total=0,x,i;
    scanf("%d",&n);

    char ara[n];
    char ara2[n];

    scanf("%s %s",&ara,&ara2);

    for(i=0;i<n;i++)
    {
       x=abs(ara[i]-ara2[i]);
       if(x>5)x=10-x;
       total=total+x;
    }
    printf("%d",total);
}
